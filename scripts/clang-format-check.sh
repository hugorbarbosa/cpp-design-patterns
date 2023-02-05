#!/usr/bin/env bash
#
# Check code formatting using clang-format.
# A report file is created in the "build-clang-format" directory.
#
# Usage:
# $ ./<script>.sh [OPTIONS]
#
# Examples:
# - Run without specifying a directory (project files will be used):
# $ ./<script>.sh
# - Run specifying a directory (e.g., "src"):
# $ ./<script>.sh -d src

set -o pipefail

# Log help message.
help() {
    echo "Check code formatting using clang-format"
    echo
    echo "Usage: $0 [OPTIONS]"
    echo "Options:"
    echo -e "\t-d, --dir <directory>    directory to check (default is the project directory)"
    echo -e "\t-m, --max <errors>       maximum errors accepted (default is 0)"
    echo -e "\t-h, --help               display this help and exit"
}

# Log message.
#
# Parameters:
# $1: message to log.
log() {
    echo -e "$1"
}

# Log error message.
#
# Parameters:
# $1: message to log.
log_error() {
    readonly red_color='\033[0;31m'
    readonly no_color='\033[0m'
    echo -e "$red_color$1$no_color"
}

# Project directory
readonly project_dir=$(git rev-parse --show-toplevel)
# Build directory
readonly build_dir=$project_dir/build-clang-format
# Report file
readonly report_file=$build_dir/report.txt
# Maximum errors
errors_max=0

# Parse arguments (separated with spaces, e.g., --option argument)
while [ "$#" -gt 0 ]; do
    case $1 in
        -d|--dir)
            dir_check="$2"
            shift # past option
            shift # past argument
            ;;
        -m|--max)
            errors_max="$2"
            shift # past option
            shift # past argument
            ;;
        -h|--help)
            help
            shift # past option
            exit 0
            ;;
        *)
            log_error "Unknown option $1"
            help
            exit 1
    esac
done

# Create build directory
log "Creating build directory: ${build_dir}"
cd $project_dir
mkdir -p $build_dir

# Get files to check
if [ -z ${dir_check+x} ]; then
    # Directory not provided
    log "Directory not provided, getting project files *.h and *.cpp using git"
    files=$(git ls-files | grep -i -e "\.h$" -e "\.cpp$")
else
    # Directory provided
    log "Getting files *.h and *.cpp in the directory: ${dir_check}"
    files=$(find $dir_check -type f -iname "*.h" -o -iname "*.cpp")
fi

if [[ -z "$files" ]]; then
    log_error "No files to be checked"
    exit 1
fi

# Iterate through all files and check formatting errors
log "Checking files recursively with clang-format"
clang-format $files --dry-run -Werror --style=file 2>&1 | tee $report_file

# Number of errors
readonly errors_found=$(grep -o -i ".*error: .*$" $report_file | wc -l)
log "--------"
log "Number of errors found: $errors_found"
log "Maximum number of errors accepted: $errors_max"
log "For more details, check file: ${report_file}"

if [ "$errors_found" -gt "$errors_max" ]; then
    log_error "Code formatting checked with errors"
    exit 1
fi

log "Code formatting checked with success"
exit 0

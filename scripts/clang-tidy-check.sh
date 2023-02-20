#!/usr/bin/env bash
#
# Analyze statically the code using clang-tidy.
# This scripts uses CMake to set up a compile command database of the project. A report file is created in the
# "<build-dir>" directory, where <build-dir> is the build directory name that can be configured by the user.
#
# Usage:
# $ ./<script>.sh [OPTIONS]
#
# Examples:
# - Run without specifying a build directory name ("build-clang-tidy" name will be used):
# $ ./<script>.sh
# - Run specifying the build directory name as "build":
# $ ./<script>.sh -b build

set -o pipefail

# Log help message.
help() {
    echo "Analyze statically the code using clang-tidy"
    echo
    echo "Usage: $0 [OPTIONS]"
    echo "Options:"
    echo -e "\t-b, --build <directory>    build directory name (default is 'build-clang-tidy')"
    echo -e "\t-m, --max <errors>         maximum errors accepted (default is 0)"
    echo -e "\t-h, --help                 display this help and exit"
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
build_dir=$project_dir/build-clang-tidy
# Report file
readonly report_file=$build_dir/report.txt
# Maximum errors
errors_max=0

# Parse arguments (separated with spaces, e.g., --option argument)
while [ "$#" -gt 0 ]; do
    case $1 in
        -b|--build)
            build_dir=$project_dir/"$2"
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

# Configure CMake
log "Creating build directory: ${build_dir}"
cd $project_dir
mkdir -p $build_dir
log "Configuring CMake"
# Note: for MSVC with Ninja, it is necessary to have the appropriate environment variables configured so that CMake will
# locate the MSVC compiler for the Ninja generator (simplest thing is running from the developer command prompt, see
# https://clang.llvm.org/docs/HowToSetupToolingForLLVM.html#setup-clang-tooling-using-cmake-on-windows)
cmake -S $project_dir -B $build_dir -DCMAKE_BUILD_TYPE=Debug -DBUILD_TESTS=ON -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -GNinja

# Get files to analyze
log "Getting project files *.h and *.cpp"
files=$(git ls-files | grep -i -e "\.h$" -e "\.cpp$")

if [[ -z "$files" ]]; then
    log_error "No files to be analyzed"
    exit 1
fi

# Iterate through all files and analyze
log "Analyzing files recursively with clang-tidy"
clang-tidy $files -p $build_dir 2>&1 | tee $report_file

# Number of errors
readonly errors_found=$(grep -o -i ".*error: .*$" $report_file | wc -l)
log "--------"
log "Number of errors found: $errors_found"
log "Maximum number of errors accepted: $errors_max"
log "For more details, check file: ${report_file}"

if [ "$errors_found" -gt "$errors_max" ]; then
    log_error "Code analysis performed with errors"
    exit 1
fi

log "Code analysis performed with success"
exit 0

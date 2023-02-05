#!/usr/bin/env bash
#
# Generate documentation from source code using doxygen.
# The documentation is created and can be accessed in "<OUTPUT_DIRECTORY>/html/index.html", where "OUTPUT_DIRECTORY" is
# a parameter in the doxygen configuration file.
# A report file is created in the "build-doxygen" directory.
#
# Usage:
# $ ./<script>.sh [OPTIONS]
#
# Examples:
# - Run without specifying a configuration file ("Doxyfile" name will be used to find it):
# $ ./<script>.sh
# - Run specifying that the configuration file is in the path "./doxygen/Doxyfile":
# $ ./<script>.sh -f ./doxygen/Doxyfile

set -o pipefail

# Log help message.
help() {
    echo "Generate documentation from source code using doxygen"
    echo
    echo "Usage: $0 [OPTIONS]"
    echo "Options:"
    echo -e "\t-f, --file <file>     doxygen configuration file (default is 'Doxyfile')"
    echo -e "\t-m, --max <errors>    maximum errors accepted (default is 0)"
    echo -e "\t-h, --help            display this help and exit"
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
readonly build_dir=$project_dir/build-doxygen
# Report file
readonly report_file=$build_dir/report.txt
# Maximum errors
errors_max=0

# Parse arguments (separated with spaces, e.g., --option argument)
while [ "$#" -gt 0 ]; do
    case $1 in
        -f|--file)
            config_file="$2"
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

# Get configuration file
if [ -z ${config_file+x} ]; then
    # File not provided
    log "Doxygen configuration file not provided, getting 'Doxyfile' using git"
    config_file=$(git ls-files | grep -i -e "\Doxyfile")
else
    # File provided
    log "Doxygen configuration file provided: ${config_file}"
fi

if [[ -z "$config_file" ]]; then
    log_error "Configuration file not found"
    exit 1
fi

# Generate documentation
log "Generating documentation with doxygen"
doxygen $config_file 2>&1 | tee $report_file

# Number of errors
readonly errors_found=$(grep -o -i ".*error: .*$" $report_file | wc -l)
log "--------"
log "Number of errors found: $errors_found"
log "Maximum number of errors accepted: $errors_max"
log "For more details, check file: ${report_file}"

if [ "$errors_found" -gt "$errors_max" ]; then
    log_error "Documentation generated with errors"
    exit 1
fi

log "Documentation generated with success"
exit 0

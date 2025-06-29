#
# Copyright (C) 2025 Hugo Barbosa.
#

# Enable code formatting check using clang-format.
#
# Parameters:
#   DIRECTORIES: Directories to get the files to be checked. To make clang-format ignore certain
#                files, .clang-format-ignore files can be created. If not present, all the available
#                files (headers and C/C++ files) in these directories will be analyzed.
#   LOG_FILE: Log file to be created with the clang-format output.
function(enable_clang_format_check DIRECTORIES LOG_FILE)
    message(CHECK_START "Enabling code formatting check with clang-format")

    # Requirements.
    message(CHECK_START "Checking needed tools")
    find_program(CLANG_FORMAT_PATH clang-format REQUIRED)
    execute_process(
        COMMAND ${CLANG_FORMAT_PATH} --version
        OUTPUT_VARIABLE CLANG_FORMAT_VERSION
        ERROR_VARIABLE CLANG_FORMAT_VERSION
    )
    message(STATUS "Clang-format: ${CLANG_FORMAT_VERSION}")
    message(CHECK_PASS "done")

    # Files to check.
    set(FILES)
    foreach(DIR IN LISTS DIRECTORIES)
        if(EXISTS ${DIR})
            # Search recursively the files.
            file(GLOB_RECURSE DIR_FILES
                "${DIR}/*.h" "${DIR}/*.hpp" "${DIR}/*.ipp" "${DIR}/*.cpp" "${DIR}/*.c"
            )
            list(APPEND FILES ${DIR_FILES})
        else()
            message(WARNING "Directory ${DIR} does not exist")
        endif()
    endforeach()

    # Generated files.
    set(REPORT_FILE "${CMAKE_BINARY_DIR}/${LOG_FILE}")

    if(FILES)
        # List of commands.
        set(CLANG_FORMAT_CMD 
            ${CLANG_FORMAT_PATH} --verbose --dry-run -Werror --style=file ${FILES}
        )

        # Target.
        set(CLANG_FORMAT_TARGET_NAME "clang_format")
        add_custom_target(${CLANG_FORMAT_TARGET_NAME}
            COMMENT "Check code formatting using clang-format."
            COMMAND ${CMAKE_COMMAND} -E echo "Running clang-format"
            COMMAND ${CMAKE_COMMAND} -E echo "Report: ${REPORT_FILE}"
            COMMAND ${CLANG_FORMAT_CMD} > ${REPORT_FILE} 2>&1
            BYPRODUCTS
                ${REPORT_FILE}
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            VERBATIM
        )
    else()
        message(WARNING "No files found in the provided directories to check code formatting")
    endif()

    message(CHECK_PASS "done")
endfunction()

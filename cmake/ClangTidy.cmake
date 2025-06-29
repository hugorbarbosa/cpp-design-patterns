#
# Copyright (C) 2025 Hugo Barbosa.
#

# Enable code static analysis, using clang-tidy.
#
# Parameters:
#   DIRECTORIES: Directories to get the files to be analyzed.
#   LOG_FILE: Log file to be created with the clang-tidy output.
function(enable_clang_tidy DIRECTORIES LOG_FILE)
    message(CHECK_START "Enabling code static analysis with clang-tidy")

    # Requirements.
    message(CHECK_START "Checking needed tools")
    find_program(CLANG_TIDY_PATH clang-tidy REQUIRED)
    execute_process(
        COMMAND ${CLANG_TIDY_PATH} --version
        OUTPUT_VARIABLE CLANG_TIDY_VERSION
        ERROR_VARIABLE CLANG_TIDY_VERSION
    )
    message(STATUS "Clang-tidy: ${CLANG_TIDY_VERSION}")
    message(CHECK_PASS "done")

    if(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
        # Files to analyze.
        set(FILES)
        foreach(DIR IN LISTS DIRECTORIES)
            if(EXISTS ${DIR})
                # Search recursively the files.
                file(GLOB_RECURSE DIR_FILES
                    "${DIR}/*.cpp" "${DIR}/*.c"
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
            set(CLANG_TIDY_LIST_CHECKS_CMD 
                ${CLANG_TIDY_PATH} --list-checks
            )
            set(CLANG_TIDY_RUN_CMD 
                ${CLANG_TIDY_PATH} -p ${CMAKE_BINARY_DIR} ${FILES}
            )

            # Target.
            set(CLANG_TIDY_TARGET_NAME "clang_tidy")
            add_custom_target(${CLANG_TIDY_TARGET_NAME}
                COMMENT "Run code static analysis using clang-tidy."
                COMMAND ${CMAKE_COMMAND} -E echo "Listing clang-tidy checks"
                COMMAND ${CLANG_TIDY_LIST_CHECKS_CMD}
                COMMAND ${CMAKE_COMMAND} -E echo "Running clang-tidy"
                COMMAND ${CMAKE_COMMAND} -E echo "Report: ${REPORT_FILE}"
                COMMAND ${CLANG_TIDY_RUN_CMD} > ${REPORT_FILE} 2>&1
                BYPRODUCTS
                    ${REPORT_FILE}
                WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
                VERBATIM
            )
        else()
            message(WARNING "No files found in the provided directories for clang-tidy")
        endif()
    else()
        message(FATAL_ERROR
            "Clang-tidy analysis requires the clang compiler, not available for ${CMAKE_CXX_COMPILER_ID}")
   endif()

    message(CHECK_PASS "done")
endfunction()

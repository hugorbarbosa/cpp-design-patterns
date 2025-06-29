#
# Copyright (C) 2025 Hugo Barbosa.
#

# Enable source code documentation generation, using doxygen.
#
# Parameters:
#   CONFIG_FILE: Doxygen configuration file.
#   PROJECT: Project name used to update the respective option in the configuration file.
#   VERSION: Project version used to update the respective option in the configuration file.
#   BRIEF: Project brief used to update the respective option in the configuration file.
#   INPUT: Input directories/files, separated with spaces, used to update the respective option in
#          the configuration file.
#   OUT_DIR: Output directory used to update the respective option in the configuration file.
#   LOG_FILE: Log file to be created with the doxygen output.
function(enable_doxygen_doc CONFIG_FILE PROJECT VERSION BRIEF INPUT OUT_DIR LOG_FILE)
    message(CHECK_START "Enabling doxygen documentation generation")

    # Requirements.
    message(CHECK_START "Checking needed tools")
    find_program(DOXYGEN_PATH doxygen REQUIRED)
    execute_process(
        COMMAND ${DOXYGEN_PATH} --version
        OUTPUT_VARIABLE DOXYGEN_VERSION
        ERROR_VARIABLE DOXYGEN_VERSION
    )
    message(STATUS "Doxygen: ${DOXYGEN_VERSION}")
    message(CHECK_PASS "done")

    # Generate the configuration file using the configuration variables.
    set(DOXYGEN_PROJECT_NAME "\"${PROJECT}\"")
    set(DOXYGEN_PROJECT_NUMBER "${VERSION}")
    set(DOXYGEN_PROJECT_BRIEF "\"${BRIEF}\"")
    set(DOXYGEN_INPUT "${INPUT}")
    set(DOXYGEN_OUTPUT_DIRECTORY "${OUT_DIR}")
    set(CONFIG_FILE_OUT "${CMAKE_BINARY_DIR}/Doxyfile")
    configure_file(${CONFIG_FILE} ${CONFIG_FILE_OUT} @ONLY)

    set(REPORT_FILE "${CMAKE_BINARY_DIR}/${LOG_FILE}")
    set(DOXYGEN_INDEX_FILE "${OUT_DIR}/index.html")

    # List of commands.
    set(DOXYGEN_CMD 
        ${DOXYGEN_PATH} ${CONFIG_FILE_OUT}
    )

    # Target.
    set(DOXYGEN_TARGET_NAME "doxygen")
    add_custom_target(${DOXYGEN_TARGET_NAME}
        COMMENT "Generate doxygen documentation for project ${PROJECT}."
        COMMAND ${CMAKE_COMMAND} -E echo "Running doxygen"
        COMMAND ${CMAKE_COMMAND} -E echo "Report: ${REPORT_FILE}"
        COMMAND ${CMAKE_COMMAND} -E echo "Generated doc index: ${DOXYGEN_INDEX_FILE}"
        COMMAND ${DOXYGEN_CMD} > ${REPORT_FILE} 2>&1
        BYPRODUCTS
            ${REPORT_FILE}
            ${DOXYGEN_INDEX_FILE}
            ${CONFIG_FILE_OUT}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
        VERBATIM
    )

    message(CHECK_PASS "done")
endfunction()

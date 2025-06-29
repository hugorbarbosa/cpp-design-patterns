#
# Copyright (C) 2025 Hugo Barbosa.
#

# Validate if the build directory is not the project source directory.
function(validate_build_directory)
    message(CHECK_START "Validating build directory")

    if(PROJECT_SOURCE_DIR STREQUAL PROJECT_BINARY_DIR)
        message(FATAL_ERROR
            "In-source builds are not allowed.\n"
            "Please use a separate build directory"
        )
    endif()

    message(CHECK_PASS "done")
endfunction()

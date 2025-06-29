#
# Copyright (C) 2025 Hugo Barbosa.
#

# Set target binary output directory.
#
# Parameters:
#   TARGET_NAME: Target name.
function(set_target_binary_output_directory TARGET_NAME)
    set_target_properties(${TARGET_NAME} PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )
endfunction()

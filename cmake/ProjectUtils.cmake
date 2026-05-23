#
# Copyright (C) 2025 Hugo Barbosa.
#

# Set binary output directory for the provided target.
function(set_target_binary_output_directory target_name)
    set_target_properties(
        ${target_name} PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
    )
endfunction()

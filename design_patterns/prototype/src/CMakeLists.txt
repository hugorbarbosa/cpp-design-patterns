add_subdirectory(prototype)

set(target_name "prototype")
add_executable(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

target_link_libraries(
    ${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options
                           ${DESIGNPAT_PROJECT_NAME}::prototypes
)

set_target_binary_output_directory(${target_name})

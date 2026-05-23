add_subdirectory(product_builder)

set(target_name "builder")
add_executable(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

target_link_libraries(
    ${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options
                           ${DESIGNPAT_PROJECT_NAME}::product_builder
)

set_target_binary_output_directory(${target_name})

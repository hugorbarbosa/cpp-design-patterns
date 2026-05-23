add_subdirectory(product_abstract_factory)

set(target_name "abstract-factory")
add_executable(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

target_link_libraries(
    ${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options
                           ${DESIGNPAT_PROJECT_NAME}::product_abstract_factory
)

set_target_binary_output_directory(${target_name})

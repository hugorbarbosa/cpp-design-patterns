add_subdirectory(dynamic_base)
add_subdirectory(dynamic_function)
add_subdirectory(static_template)

set(target_name "strategy")
add_executable(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

target_link_libraries(
    ${target_name}
    PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options
            ${DESIGNPAT_PROJECT_NAME}::dynamic_strategy_base
            ${DESIGNPAT_PROJECT_NAME}::dynamic_strategy_function
            ${DESIGNPAT_PROJECT_NAME}::static_strategy
)

set_target_binary_output_directory(${target_name})

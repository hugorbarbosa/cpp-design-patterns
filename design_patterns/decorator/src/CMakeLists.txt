add_subdirectory(dynamic_decorator)
add_subdirectory(static_decorator)

set(target_name "decorator")
add_executable(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

target_link_libraries(
    ${target_name}
    PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options ${DESIGNPAT_PROJECT_NAME}::dynamic_decorator
            ${DESIGNPAT_PROJECT_NAME}::static_decorator
)

set_target_binary_output_directory(${target_name})

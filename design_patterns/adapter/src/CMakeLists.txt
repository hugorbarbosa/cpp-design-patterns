add_subdirectory(common)
add_subdirectory(object_adapter)
add_subdirectory(class_adapter)

set(target_name "adapter")
add_executable(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

target_link_libraries(
    ${target_name}
    PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options ${DESIGNPAT_PROJECT_NAME}::object_adapter
            ${DESIGNPAT_PROJECT_NAME}::class_adapter
)

set_target_binary_output_directory(${target_name})

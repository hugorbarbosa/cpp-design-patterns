add_subdirectory(full_bridge)
add_subdirectory(pimpl_idiom)

set(target_name "bridge")
add_executable(${target_name})

target_sources(${target_name} PRIVATE main.cpp)

target_link_libraries(
    ${target_name}
    PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options ${DESIGNPAT_PROJECT_NAME}::full_bridge
            ${DESIGNPAT_PROJECT_NAME}::pimpl_idiom
)

set_target_binary_output_directory(${target_name})

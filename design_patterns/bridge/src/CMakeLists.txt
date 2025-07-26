project(bridge)

add_subdirectory(full_bridge)
add_subdirectory(pimpl_idiom)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
    PRIVATE ${CPPDPAT_PROJECT_NAME}::full_bridge
    PRIVATE ${CPPDPAT_PROJECT_NAME}::pimpl_idiom
)

set_target_binary_output_directory(${PROJECT_NAME})

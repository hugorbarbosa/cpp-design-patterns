project(adapter)

add_subdirectory(common)
add_subdirectory(object_adapter)
add_subdirectory(class_adapter)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
    PRIVATE ${CPPDPAT_PROJECT_NAME}::object_adapter
    PRIVATE ${CPPDPAT_PROJECT_NAME}::class_adapter
)

set_target_binary_output_directory(${PROJECT_NAME})

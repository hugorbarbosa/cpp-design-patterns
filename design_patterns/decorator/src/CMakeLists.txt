project(decorator)

add_subdirectory(dynamic_decorator)
add_subdirectory(static_decorator)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
    PRIVATE ${CPPDPAT_PROJECT_NAME}::dynamic_decorator
    PRIVATE ${CPPDPAT_PROJECT_NAME}::static_decorator
)

set_target_binary_output_directory(${PROJECT_NAME})

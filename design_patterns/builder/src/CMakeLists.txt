project(builder)

add_subdirectory(product_builder)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
    PRIVATE ${CPPDPAT_PROJECT_NAME}::product_builder
)

set_target_binary_output_directory(${PROJECT_NAME})

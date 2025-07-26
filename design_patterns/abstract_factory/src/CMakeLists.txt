project(abstract-factory)

add_subdirectory(product_abstract_factory)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
    PRIVATE ${CPPDPAT_PROJECT_NAME}::product_abstract_factory
)

set_target_binary_output_directory(${PROJECT_NAME})

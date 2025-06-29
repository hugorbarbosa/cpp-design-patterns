project(strategy)

add_subdirectory(dynamic_base)
add_subdirectory(dynamic_function)
add_subdirectory(static_template)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
    PRIVATE ${CPPDPAT_PROJECT_NAME}::dynamic_strategy_base
    PRIVATE ${CPPDPAT_PROJECT_NAME}::dynamic_strategy_function
    PRIVATE ${CPPDPAT_PROJECT_NAME}::static_strategy
)

set_target_binary_output_directory(${PROJECT_NAME})

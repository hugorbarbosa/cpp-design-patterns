project(flyweight)

add_subdirectory(flyweight)

add_executable(${PROJECT_NAME}
    main.cpp
)

# TODO: Link to the flyweight library.
# target_link_libraries(${PROJECT_NAME}
#     PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
#     PRIVATE ${CPPDPAT_PROJECT_NAME}::flyweight_example
# )

set_target_binary_output_directory(${PROJECT_NAME})

project(Flyweight)

add_subdirectory(flyweight)

add_executable(${PROJECT_NAME}
    main.cpp
)

# TODO: Link to the flyweight library.
# target_link_libraries(${PROJECT_NAME}
#     PRIVATE CppDesignPatterns::FlyweightExample
# )

# Generate executable in a specific directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

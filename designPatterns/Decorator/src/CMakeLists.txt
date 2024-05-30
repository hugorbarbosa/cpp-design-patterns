project(Decorator)

add_subdirectory(dynamicDecorator)
add_subdirectory(staticDecorator)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE CppDesignPatterns::DynamicDecorator
    PRIVATE CppDesignPatterns::StaticDecorator
)

# Generate executable in a specific directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

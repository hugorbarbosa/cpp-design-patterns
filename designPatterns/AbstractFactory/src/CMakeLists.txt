project(AbstractFactory)

add_subdirectory(productAbstractFactory)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE CppDesignPatterns::ProductAbstractFactory
)

# Generate executable in a specific directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

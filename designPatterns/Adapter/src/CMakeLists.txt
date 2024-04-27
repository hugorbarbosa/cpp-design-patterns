project(Adapter)

add_subdirectory(common)
add_subdirectory(objectAdapter)
add_subdirectory(classAdapter)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE CppDesignPatterns::ObjectAdapter
    PRIVATE CppDesignPatterns::ClassAdapter
)

# Generate executable in a specific directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

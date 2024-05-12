project(Bridge)

add_subdirectory(fullBridge)
add_subdirectory(pimplIdiom)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE CppDesignPatterns::FullBridge
    PRIVATE CppDesignPatterns::PimplIdiom
)

# Generate executable in a specific directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

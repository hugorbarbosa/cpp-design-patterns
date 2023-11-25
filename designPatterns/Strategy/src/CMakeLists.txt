project(Strategy)

add_subdirectory(dynamicBase)
add_subdirectory(dynamicFunction)
add_subdirectory(staticTemplate)

add_executable(${PROJECT_NAME}
    main.cpp
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE CppDesignPatterns::DynamicStrategyBase
    PRIVATE CppDesignPatterns::DynamicStrategyFunction
    PRIVATE CppDesignPatterns::StaticStrategy
)

# Generate executable in a specific directory
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

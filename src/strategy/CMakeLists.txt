# ----------------------------------------------------------------------------
# Project setup
project(Strategy)

# Subdirectories
add_subdirectory(dynamicBase)
add_subdirectory(dynamicFunction)
add_subdirectory(staticTemplate)

# ----------------------------------------------------------------------------
# Executable
add_executable(${PROJECT_NAME}
    main.cpp
)

# ----------------------------------------------------------------------------
# Build

target_include_directories(${PROJECT_NAME}
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}
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

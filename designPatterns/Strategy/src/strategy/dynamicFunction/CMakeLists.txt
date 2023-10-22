project(DynamicStrategyFunction)

add_library(${PROJECT_NAME} INTERFACE .)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} INTERFACE .)

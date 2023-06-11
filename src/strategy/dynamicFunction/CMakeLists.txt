# ----------------------------------------------------------------------------
# Project setup
project(DynamicStrategyFunction)

# ----------------------------------------------------------------------------
# Library
add_library(${PROJECT_NAME} INTERFACE .)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

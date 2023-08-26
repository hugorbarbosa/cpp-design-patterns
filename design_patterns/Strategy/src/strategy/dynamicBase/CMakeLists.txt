# ----------------------------------------------------------------------------
# Project setup
project(DynamicStrategyBase)

# ----------------------------------------------------------------------------
# Library
add_library(${PROJECT_NAME} INTERFACE .)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

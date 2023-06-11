# ----------------------------------------------------------------------------
# Project setup
project(StaticStrategy)

# ----------------------------------------------------------------------------
# Library
add_library(${PROJECT_NAME} INTERFACE .)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

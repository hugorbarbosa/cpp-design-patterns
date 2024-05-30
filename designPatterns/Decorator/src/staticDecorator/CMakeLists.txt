project(StaticDecorator)

add_library(${PROJECT_NAME} STATIC
    Component.cpp
    Decorator1.h
    Decorator2.h
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

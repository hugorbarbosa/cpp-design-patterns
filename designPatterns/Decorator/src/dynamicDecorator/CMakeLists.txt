project(DynamicDecorator)

add_library(${PROJECT_NAME} STATIC
    Decorator.cpp
    ConcreteComponent.cpp
    ConcreteDecorator1.cpp
    ConcreteDecorator2.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

project(ProductFactoryMethod)

add_library(${PROJECT_NAME} STATIC
    ConcreteProductA.cpp
    ConcreteCreatorA.cpp
    ConcreteProductB.cpp
    ConcreteCreatorB.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

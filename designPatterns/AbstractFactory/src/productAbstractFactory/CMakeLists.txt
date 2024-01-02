project(ProductAbstractFactory)

add_library(${PROJECT_NAME} STATIC
    ConcreteProductA1.cpp
    ConcreteProductA2.cpp
    ConcreteProductB1.cpp
    ConcreteProductB2.cpp
    ConcreteFactory1.cpp
    ConcreteFactory2.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

project(ProductFactoryMethod)

add_library(${PROJECT_NAME} STATIC
    ConcreteProduct.cpp
    ConcreteCreator.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

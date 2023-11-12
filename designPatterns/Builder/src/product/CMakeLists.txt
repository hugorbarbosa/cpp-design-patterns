project(Product)

add_library(${PROJECT_NAME} STATIC
    Product.cpp
    ConcreteProductBuilder.cpp
    Director.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

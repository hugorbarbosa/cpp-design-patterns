project(product_abstract_factory)

add_library(${PROJECT_NAME} STATIC
    ConcreteProductA1.cpp
    ConcreteProductA2.cpp
    ConcreteProductB1.cpp
    ConcreteProductB2.cpp
    ConcreteFactory1.cpp
    ConcreteFactory2.cpp
)
add_library(${CPPDPAT_PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC .
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
)

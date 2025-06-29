project(product_factory_method)

add_library(${PROJECT_NAME} STATIC
    ConcreteProductA.cpp
    ConcreteCreatorA.cpp
    ConcreteProductB.cpp
    ConcreteCreatorB.cpp
)
add_library(${CPPDPAT_PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC .
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
)

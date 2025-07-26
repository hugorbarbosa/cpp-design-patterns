project(prototypes)

add_library(${PROJECT_NAME} STATIC
    ConcretePrototype1.cpp
    ConcretePrototype2.cpp
)
add_library(${CPPDPAT_PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC .
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
)

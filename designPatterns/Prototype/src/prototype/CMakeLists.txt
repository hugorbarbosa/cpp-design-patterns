project(Prototypes)

add_library(${PROJECT_NAME} STATIC
    ConcretePrototype1.cpp
    ConcretePrototype2.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

project(StaticStrategy)

add_library(${PROJECT_NAME} STATIC
    Context.h
    ConcreteStrategyA.cpp
    ConcreteStrategyB.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} INTERFACE ..)

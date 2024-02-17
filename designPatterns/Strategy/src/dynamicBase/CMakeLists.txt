project(DynamicStrategyBase)

add_library(${PROJECT_NAME} STATIC
    Context.cpp
    ConcreteStrategyA.cpp
    ConcreteStrategyB.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} INTERFACE ..)

project(FullBridge)

add_subdirectory(client)

add_library(${PROJECT_NAME} STATIC
    ConcreteImplementor.cpp
    RefinedAbstraction.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

target_link_libraries(${PROJECT_NAME}
    PUBLIC CppDesignPatterns::PimplBridgeClient
)

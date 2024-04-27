project(AdapterCommon)

add_library(${PROJECT_NAME} STATIC
    ITarget.h
    Adaptee.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

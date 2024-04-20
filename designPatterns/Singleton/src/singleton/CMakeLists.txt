project(SingletonExample)

add_library(${PROJECT_NAME} STATIC
    Singleton.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

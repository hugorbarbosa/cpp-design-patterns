project(ClassAdapter)

add_library(${PROJECT_NAME} STATIC
    ClassAdapter.cpp
)
add_library(CppDesignPatterns::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC .)

target_link_libraries(${PROJECT_NAME}
    PUBLIC CppDesignPatterns::AdapterCommon
)

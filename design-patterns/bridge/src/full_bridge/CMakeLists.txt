project(full_bridge)

add_subdirectory(client)

add_library(${PROJECT_NAME} STATIC
    ConcreteImplementor.cpp
    RefinedAbstraction.cpp
)
add_library(${CPPDPAT_PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC .
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE ${CPPDPAT_PROJECT_NAME}::compile_options
    PUBLIC ${CPPDPAT_PROJECT_NAME}::pimpl_bridge_client
)

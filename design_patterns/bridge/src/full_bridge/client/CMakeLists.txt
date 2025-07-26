project(pimpl_bridge_client)

add_library(${PROJECT_NAME} INTERFACE)
add_library(${CPPDPAT_PROJECT_NAME}::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    INTERFACE .
)

target_link_libraries(${PROJECT_NAME}
    INTERFACE ${CPPDPAT_PROJECT_NAME}::compile_options
)

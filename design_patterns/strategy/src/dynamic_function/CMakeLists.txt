set(target_name "dynamic_strategy_function")
add_library(${target_name} STATIC)
add_library(${DESIGNPAT_PROJECT_NAME}::${target_name} ALIAS ${target_name})

target_sources(
    ${target_name}
    PRIVATE context.cpp
    PUBLIC FILE_SET HEADERS
)

target_link_libraries(${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options)

set(target_name "static_strategy")
add_library(${target_name} STATIC)
add_library(${DESIGNPAT_PROJECT_NAME}::${target_name} ALIAS ${target_name})

target_sources(
    ${target_name}
    PRIVATE concrete_strategy_a.cpp concrete_strategy_b.cpp
    PUBLIC FILE_SET HEADERS
)

target_link_libraries(${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options)

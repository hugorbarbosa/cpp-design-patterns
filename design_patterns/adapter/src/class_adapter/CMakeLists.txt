set(target_name "class_adapter")
add_library(${target_name} STATIC)
add_library(${DESIGNPAT_PROJECT_NAME}::${target_name} ALIAS ${target_name})

target_sources(
    ${target_name}
    PRIVATE class_adapter.cpp
    PUBLIC FILE_SET HEADERS
)

target_link_libraries(
    ${target_name}
    PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options
    PUBLIC ${DESIGNPAT_PROJECT_NAME}::adapter_common
)

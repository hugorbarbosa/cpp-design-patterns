set(target_name "product_factory_method")
add_library(${target_name} STATIC)
add_library(${DESIGNPAT_PROJECT_NAME}::${target_name} ALIAS ${target_name})

target_sources(
    ${target_name}
    PRIVATE concrete_product_a.cpp concrete_creator_a.cpp concrete_product_b.cpp
            concrete_creator_b.cpp
    PUBLIC FILE_SET HEADERS
)

target_link_libraries(${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options)

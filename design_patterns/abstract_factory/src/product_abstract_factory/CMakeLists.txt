set(target_name "product_abstract_factory")
add_library(${target_name} STATIC)
add_library(${DESIGNPAT_PROJECT_NAME}::${target_name} ALIAS ${target_name})

target_sources(
    ${target_name}
    PRIVATE concrete_productA1.cpp concrete_productA2.cpp concrete_productB1.cpp
            concrete_productB2.cpp concrete_factory1.cpp concrete_factory2.cpp
    PUBLIC FILE_SET HEADERS
)

target_link_libraries(${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options)

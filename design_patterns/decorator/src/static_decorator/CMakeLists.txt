set(target_name "static_decorator")
add_library(${target_name} STATIC)
add_library(${DESIGNPAT_PROJECT_NAME}::${target_name} ALIAS ${target_name})

target_sources(
    ${target_name}
    PRIVATE component.cpp decorator1.hpp decorator2.hpp
    PUBLIC FILE_SET HEADERS
)

target_link_libraries(${target_name} PRIVATE ${DESIGNPAT_PROJECT_NAME}::compile_options)

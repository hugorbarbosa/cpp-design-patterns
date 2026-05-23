set(target_name "pimpl_bridge_client")
add_library(${target_name} INTERFACE)
add_library(${DESIGNPAT_PROJECT_NAME}::${target_name} ALIAS ${target_name})

target_sources(${target_name} PUBLIC FILE_SET HEADERS)

target_link_libraries(${target_name} INTERFACE ${DESIGNPAT_PROJECT_NAME}::compile_options)

#
# Copyright (C) 2025 Hugo Barbosa.
#

# ----------------------------------------------------------------------------
# Project setup
# ----------------------------------------------------------------------------
cmake_minimum_required(VERSION 3.28)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
     "${CMAKE_CURRENT_SOURCE_DIR}/external/cmake-modules/modules"
)

project(
    cpp_design_patterns
    VERSION 1.0.0
    LANGUAGES CXX
    DESCRIPTION "C++ design patterns."
)

set(DESIGNPAT_PROJECT_NAME ${PROJECT_NAME})
set(DESIGNPAT_PROJECT_VERSION ${PROJECT_VERSION})

# ----------------------------------------------------------------------------
# Pre-requirements
# ----------------------------------------------------------------------------
include(SourceBuilds)
validate_build_directory()

# ----------------------------------------------------------------------------
# Git information
# ----------------------------------------------------------------------------
include(GitInfo)
get_git_info("GIT_INFO")

# ----------------------------------------------------------------------------
# Configuration options
# ----------------------------------------------------------------------------
option(DESIGNPAT_ENABLE_CLANG_FORMAT "Enable code formatting with clang-format" OFF)
option(DESIGNPAT_ENABLE_CLANG_TIDY "Enable code static analysis with clang-tidy" OFF)
option(DESIGNPAT_ENABLE_ASAN "Enable Address Sanitizer" OFF)
option(DESIGNPAT_ENABLE_LSAN "Enable Leak Sanitizer" OFF)
option(DESIGNPAT_ENABLE_MSAN "Enable Memory Sanitizer" OFF)
option(DESIGNPAT_ENABLE_TSAN "Enable Thread Sanitizer" OFF)
option(DESIGNPAT_ENABLE_UBSAN "Enable Undefined Behavior Sanitizer" OFF)
option(DESIGNPAT_ENABLE_DOXYGEN "Enable doxygen documentation generation" OFF)
option(DESIGNPAT_ENABLE_CMAKE_FORMAT "Enable CMake code formatting with cmake-format" OFF)
option(DESIGNPAT_ENABLE_CMAKE_LINT "Enable CMake lint with cmake-lint" OFF)

# ----------------------------------------------------------------------------
# CMake options
# ----------------------------------------------------------------------------
if(PROJECT_IS_TOP_LEVEL)
    if(NOT CMAKE_BUILD_TYPE)
        set(default_build_type Debug)
        message(STATUS "No build type specified, setting it to '${default_build_type}'")
        set(CMAKE_BUILD_TYPE ${default_build_type})
    endif()

    # Generates a JSON file containing the exact compiler commands. Useful for clang-based tools.
    set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endif()

# ----------------------------------------------------------------------------
# Compiler options
# ----------------------------------------------------------------------------
if(NOT CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 20)
endif()

# Disable compiler specific extensions.
set(CMAKE_CXX_EXTENSIONS OFF)

include(CompilerOptions)

set(compiler_options_lib compile_options)
add_library(${compiler_options_lib} INTERFACE)
add_library(${DESIGNPAT_PROJECT_NAME}::${compiler_options_lib} ALIAS ${compiler_options_lib})
if(PROJECT_IS_TOP_LEVEL)
    add_default_compiler_options(${compiler_options_lib} WARNINGS_AS_ERRORS)
else()
    add_default_compiler_options(${compiler_options_lib})
endif()

# ----------------------------------------------------------------------------
# Quality tools
# ----------------------------------------------------------------------------

set(source_code_dirs "${CMAKE_CURRENT_SOURCE_DIR}/design_patterns")

if(DESIGNPAT_ENABLE_CLANG_FORMAT)
    include(ClangFormat)
    add_clang_format(
        DIRECTORIES "${source_code_dirs}" LOG_FILE "${CMAKE_BINARY_DIR}/clang_format_report.log"
        CONFIG_FILE "${CMAKE_CURRENT_SOURCE_DIR}/.clang-format"
    )
endif()

if(DESIGNPAT_ENABLE_CLANG_TIDY)
    include(ClangTidy)
    add_clang_tidy(
        DIRECTORIES "${source_code_dirs}" LOG_FILE "${CMAKE_BINARY_DIR}/clang_tidy_report.log"
        CONFIG_FILE "${CMAKE_CURRENT_SOURCE_DIR}/.clang-tidy"
    )
endif()

if(DESIGNPAT_ENABLE_ASAN
   OR DESIGNPAT_ENABLE_LSAN
   OR DESIGNPAT_ENABLE_MSAN
   OR DESIGNPAT_ENABLE_TSAN
   OR DESIGNPAT_ENABLE_UBSAN
)
    include(Sanitizers)
    add_sanitizers(
        ${compiler_options_lib}
        ASAN
        ${DESIGNPAT_ENABLE_ASAN}
        LSAN
        ${DESIGNPAT_ENABLE_LSAN}
        MSAN
        ${DESIGNPAT_ENABLE_MSAN}
        TSAN
        ${DESIGNPAT_ENABLE_TSAN}
        UBSAN
        ${DESIGNPAT_ENABLE_UBSAN}
    )
endif()

if(DESIGNPAT_ENABLE_DOXYGEN)
    include(Doxygen)
    add_doxygen(
        DOXYFILE_IN
        "${CMAKE_CURRENT_SOURCE_DIR}/doxygen/Doxyfile.in"
        DOXYGEN_PROJECT_NAME
        "C++ Design Patterns"
        DOXYGEN_PROJECT_NUMBER
        ${DESIGNPAT_PROJECT_VERSION}
        DOXYGEN_PROJECT_BRIEF
        "Design patterns using C++"
        DOXYGEN_INPUT
        "${source_code_dirs}"
        DOXYGEN_OUTPUT_DIRECTORY
        "${CMAKE_BINARY_DIR}/doxygen"
        LOG_FILE
        "${CMAKE_BINARY_DIR}/doxygen_report.log"
    )
endif()

if(DESIGNPAT_ENABLE_CMAKE_FORMAT)
    include(CmakeFormat)
    add_cmake_format(
        DIRECTORIES
        "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
        "${source_code_dirs}"
        EXTRA_FILES
        "${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt"
        LOG_FILE
        "${CMAKE_BINARY_DIR}/cmake_format_report.log"
        CONFIG_FILE
        "${CMAKE_CURRENT_SOURCE_DIR}/.cmake-format.py"
    )
endif()

if(DESIGNPAT_ENABLE_CMAKE_LINT)
    include(CmakeLint)
    add_cmake_lint(
        DIRECTORIES
        "${CMAKE_CURRENT_SOURCE_DIR}/cmake"
        "${source_code_dirs}"
        EXTRA_FILES
        "${CMAKE_CURRENT_SOURCE_DIR}/CMakeLists.txt"
        LOG_FILE
        "${CMAKE_BINARY_DIR}/cmake_lint_report.log"
        CONFIG_FILE
        "${CMAKE_CURRENT_SOURCE_DIR}/.cmake-format.py"
    )
endif()

# ----------------------------------------------------------------------------
# Build
# ----------------------------------------------------------------------------
include(ProjectUtils)
add_subdirectory(design_patterns)

# ----------------------------------------------------------------------------
# Configuration report
# ----------------------------------------------------------------------------
message(STATUS)
message(STATUS "${DESIGNPAT_PROJECT_NAME} ${DESIGNPAT_PROJECT_VERSION} configuration:")
message(STATUS "- CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
message(STATUS "- CMAKE_CXX_COMPILER_ID = ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "- CMAKE_CXX_COMPILER_VERSION = ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "- CMAKE_CXX_STANDARD = ${CMAKE_CXX_STANDARD}")
message(STATUS "- CMAKE_EXPORT_COMPILE_COMMANDS = ${CMAKE_EXPORT_COMPILE_COMMANDS}")
message(STATUS "- PROJECT_IS_TOP_LEVEL = ${PROJECT_IS_TOP_LEVEL}")
message(STATUS "- DESIGNPAT_ENABLE_CLANG_FORMAT = ${DESIGNPAT_ENABLE_CLANG_FORMAT}")
message(STATUS "- DESIGNPAT_ENABLE_CLANG_TIDY = ${DESIGNPAT_ENABLE_CLANG_TIDY}")
message(STATUS "- DESIGNPAT_ENABLE_ASAN = ${DESIGNPAT_ENABLE_ASAN}")
message(STATUS "- DESIGNPAT_ENABLE_LSAN = ${DESIGNPAT_ENABLE_LSAN}")
message(STATUS "- DESIGNPAT_ENABLE_MSAN = ${DESIGNPAT_ENABLE_MSAN}")
message(STATUS "- DESIGNPAT_ENABLE_TSAN = ${DESIGNPAT_ENABLE_TSAN}")
message(STATUS "- DESIGNPAT_ENABLE_UBSAN = ${DESIGNPAT_ENABLE_UBSAN}")
message(STATUS "- DESIGNPAT_ENABLE_DOXYGEN = ${DESIGNPAT_ENABLE_DOXYGEN}")
message(STATUS "- DESIGNPAT_ENABLE_CMAKE_FORMAT = ${DESIGNPAT_ENABLE_CMAKE_FORMAT}")
message(STATUS "- DESIGNPAT_ENABLE_CMAKE_LINT = ${DESIGNPAT_ENABLE_CMAKE_LINT}")
message(STATUS)

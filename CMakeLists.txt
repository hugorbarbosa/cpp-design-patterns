#
# Copyright (C) 2025 Hugo Barbosa.
#

# ----------------------------------------------------------------------------
# Project setup
# ----------------------------------------------------------------------------

cmake_minimum_required(VERSION 3.21)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

project(cpp_design_patterns
    VERSION 1.0.0
    LANGUAGES CXX
    DESCRIPTION "C++ design patterns."
)

set(CPPDPAT_PROJECT_NAME ${PROJECT_NAME})
set(CPPDPAT_PROJECT_VERSION ${PROJECT_VERSION})

set(MAIN_PROJECT OFF)
if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(MAIN_PROJECT ON)
endif()

# ----------------------------------------------------------------------------
# Pre-requirements
# ----------------------------------------------------------------------------
include(SourceBuilds)
validate_build_directory()

# ----------------------------------------------------------------------------
# Configuration options
# ----------------------------------------------------------------------------
option(CPPDPAT_ENABLE_CLANG_FORMAT "Enable code formatting check with clang-format" OFF)
option(CPPDPAT_ENABLE_CLANG_TIDY "Enable code static analysis with clang-tidy" OFF)
option(CPPDPAT_ENABLE_DOXYGEN "Enable doxygen documentation generation" OFF)

# ----------------------------------------------------------------------------
# CMake options
# ----------------------------------------------------------------------------
if(MAIN_PROJECT)
    # Build type on single-configuration generators (e.g. Makefile or Ninja).
    # Set default build type if build type not set.
    if(NOT CMAKE_BUILD_TYPE)
        set(DEFAULT_BUILD_TYPE Debug)
        message(STATUS "No build type specified, setting it to '${DEFAULT_BUILD_TYPE}'")
        set(CMAKE_BUILD_TYPE ${DEFAULT_BUILD_TYPE})
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

set(PROJECT_COMPILER_OPTIONS_LIBRARY compile_options)
set(COMPILATION_WARNINGS_AS_ERRORS ${MAIN_PROJECT})
set_project_default_compiler_options(
    ${PROJECT_COMPILER_OPTIONS_LIBRARY}
    ${CPPDPAT_PROJECT_NAME}
    ${COMPILATION_WARNINGS_AS_ERRORS}
)

# ----------------------------------------------------------------------------
# Quality tools
# ----------------------------------------------------------------------------
if(CPPDPAT_ENABLE_CLANG_FORMAT)
    include(ClangFormat)
    set(CLANG_FORMAT_DIRECTORIES
        "${CMAKE_CURRENT_SOURCE_DIR}/design-patterns"
    )
    set(CLANG_FORMAT_LOG_FILE "clang-format-report.log")
    enable_clang_format_check("${CLANG_FORMAT_DIRECTORIES}" ${CLANG_FORMAT_LOG_FILE})
endif()

if(CPPDPAT_ENABLE_CLANG_TIDY)
    include(ClangTidy)
    set(CLANG_TIDY_DIRECTORIES
        "${CMAKE_CURRENT_SOURCE_DIR}/design-patterns"
    )
    set(CLANG_TIDY_LOG_FILE "clang-tidy-report.log")
    enable_clang_tidy("${CLANG_TIDY_DIRECTORIES}" ${CLANG_TIDY_LOG_FILE})
endif()

if(CPPDPAT_ENABLE_DOXYGEN)
    include(DoxygenDoc)
    set(DOXYGEN_CONFIG_FILE "${CMAKE_CURRENT_SOURCE_DIR}/doxygen/Doxyfile.in")
    set(DOXYGEN_PROJECT "C++ Design Patterns")
    set(DOXYGEN_VERSION ${CPPDPAT_PROJECT_VERSION})
    set(DOXYGEN_BRIEF "Design patterns using Modern C++")
    set(DOXYGEN_INPUT_LIST
        "${CMAKE_CURRENT_SOURCE_DIR}/design-patterns"
    )
    string(REPLACE ";" " " DOXYGEN_INPUT "${DOXYGEN_INPUT_LIST}")
    set(DOXYGEN_OUT_DIR "${CMAKE_BINARY_DIR}/doxygen")
    set(DOXYGEN_LOG_FILE "doxygen-report.log")
    enable_doxygen_doc(
        ${DOXYGEN_CONFIG_FILE}
        ${DOXYGEN_PROJECT}
        ${DOXYGEN_VERSION}
        ${DOXYGEN_BRIEF}
        ${DOXYGEN_INPUT}
        ${DOXYGEN_OUT_DIR}
        ${DOXYGEN_LOG_FILE}
    )
endif()

# ----------------------------------------------------------------------------
# Build
# ----------------------------------------------------------------------------
include(ProjectUtils)
add_subdirectory(design-patterns)

# ----------------------------------------------------------------------------
# Configuration report
# ----------------------------------------------------------------------------
message(STATUS)
message(STATUS "${CPPDPAT_PROJECT_NAME} ${CPPDPAT_PROJECT_VERSION} configuration:")
message(STATUS "- CMAKE_BUILD_TYPE = ${CMAKE_BUILD_TYPE}")
message(STATUS "- CMAKE_CXX_COMPILER_ID = ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "- CMAKE_CXX_COMPILER_VERSION = ${CMAKE_CXX_COMPILER_VERSION}")
message(STATUS "- CMAKE_CXX_STANDARD = ${CMAKE_CXX_STANDARD}")
message(STATUS "- CMAKE_EXPORT_COMPILE_COMMANDS = ${CMAKE_EXPORT_COMPILE_COMMANDS}")
message(STATUS "- CPPDPAT_ENABLE_CLANG_FORMAT = ${CPPDPAT_ENABLE_CLANG_FORMAT}")
message(STATUS "- CPPDPAT_ENABLE_CLANG_TIDY = ${CPPDPAT_ENABLE_CLANG_TIDY}")
message(STATUS "- CPPDPAT_ENABLE_DOXYGEN = ${CPPDPAT_ENABLE_DOXYGEN}")
message(STATUS "- MAIN_PROJECT = ${MAIN_PROJECT}")
message(STATUS)

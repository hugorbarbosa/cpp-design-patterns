#
# Copyright (C) 2025 Hugo Barbosa.
#

# Add the default compiler options to the provided target.
#
# Parameters:
#   TARGET_NAME: Target name to add the compiler options.
#   WARNINGS_AS_ERRORS: Option to set warnings as errors.
function(add_default_compiler_options TARGET_NAME WARNINGS_AS_ERRORS)
    set(MSVC_OPTIONS
        # Displays level 1 to level 4 (informational) warnings.
        /W4
    )

    set(CLANG_OPTIONS
        # Enable most warning messages.
        -Wall
        # Enable some extra warnings.
        -Wextra
        # Issue all the warnings demanded by strict ISO C and ISO C++.
        -Wpedantic
        # Warn if something being unused.
        -Wunused
        # Warn if an old-style (C-style) cast to a non-void type is used within a C++ program.
        -Wold-style-cast
        # Warn if a pointer is cast such that the required alignment of the target is increased.
        -Wcast-align
        # Warn whenever a variable or type declaration shadows another one.
        -Wshadow
        # Warn if a class with virtual functions has a non-virtual destructor.
        -Wnon-virtual-dtor
        # Warn when a function declaration hides virtual functions from a base class.
        -Woverloaded-virtual
        # Warn for implicit conversions that may alter a value.
        -Wconversion
        # Warn for implicit conversions that may change the sign of an integer value.
        -Wsign-conversion
        # Warn when a value of type float is implicitly promoted to double.
        -Wdouble-promotion
        # Warn if the compiler detects a null pointer dereference.
        -Wnull-dereference
        # Enable -Wformat plus additional format checks (calls to printf and scanf, etc).
        -Wformat=2
        # Warn on statements that fallthrough without an explicit annotation.
        -Wimplicit-fallthrough
    )

    set(GCC_OPTIONS
        ${CLANG_OPTIONS}
        # Warn when the indentation of the code does not reflect the block structure.
        -Wmisleading-indentation
        # Warn about duplicated conditions in an if-else-if chain.
        -Wduplicated-cond
        # Warn when an if-else has identical branches.
        -Wduplicated-branches
        # Warn about suspicious uses of logical operators in expressions.
        -Wlogical-op
        # Warn when an expression is cast to its own type.
        -Wuseless-cast
        # Warn about overriding virtual functions that are not marked with the override keyword.
        -Wsuggest-override
    )

    if(WARNINGS_AS_ERRORS)
        message(STATUS "Compilation warnings will be treated as errors")
        list(APPEND MSVC_OPTIONS /WX)
        list(APPEND CLANG_OPTIONS -Werror)
        list(APPEND GCC_OPTIONS -Werror)
    endif()

    if(CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        set(COMPILER_OPTIONS ${MSVC_OPTIONS})
    elseif(CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
        set(COMPILER_OPTIONS ${CLANG_OPTIONS})
    elseif(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
        set(COMPILER_OPTIONS ${GCC_OPTIONS})
    else()
        message(AUTHOR_WARNING "No compiler options set for ${CMAKE_CXX_COMPILER_ID}")
    endif()

    target_compile_options(${TARGET_NAME}
        INTERFACE ${COMPILER_OPTIONS}
    )
endfunction()

# Set the default compiler options to the provided library.
# The library will be created by this function.
#
# Parameters:
#   LIBRARY_NAME: Name of the library to add the compiler options.
#   NAMESPACE: Namespace for the library.
#   WARNINGS_AS_ERRORS: Option to set warnings as errors.
function(set_project_default_compiler_options LIBRARY_NAME NAMESPACE WARNINGS_AS_ERRORS)
    add_library(${LIBRARY_NAME} INTERFACE)
    add_library(${NAMESPACE}::${LIBRARY_NAME} ALIAS ${LIBRARY_NAME})
    add_default_compiler_options(
        ${LIBRARY_NAME}
        ${WARNINGS_AS_ERRORS}
    )
endfunction()

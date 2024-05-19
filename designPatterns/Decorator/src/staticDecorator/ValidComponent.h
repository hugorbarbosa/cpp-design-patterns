/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <concepts>
#include <string>
#include <type_traits>

namespace cppDesignPatterns {
namespace decorator {

/**
 * @brief Concept for a valid component.
 *
 * @tparam T Component type.
 */
template<typename T>
concept ValidComponent = requires(T component)
{
    {
        component.operation()
        } -> std::same_as<std::string>;
};

} // namespace decorator
} // namespace cppDesignPatterns

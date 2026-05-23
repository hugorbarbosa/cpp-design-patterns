/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_VALID_COMPONENT_HPP
#define DESIGN_PATTERNS_VALID_COMPONENT_HPP

#include <concepts>
#include <string>
#include <type_traits>

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Concept for a valid component.
 *
 * @tparam T Component type.
 */
template<typename T>
concept ValidComponent = requires(T component) {
    { component.operation() } -> std::same_as<std::string>;
};

} // namespace decorator
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_VALID_COMPONENT_HPP

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_DECORATOR1_HPP
#define DESIGN_PATTERNS_DECORATOR1_HPP

#include "valid_component.hpp"

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Decorator example.
 *
 * This decorator uses composition to handle the decorated component.
 *
 * @note In this case, there's no base class for the decorator comparing to the dynamic decorator.
 *
 * @tparam Component Component type.
 */
template<ValidComponent Component>
class Decorator1 {
public:
    /**
     * @brief Constructor.
     *
     * @tparam Args Arguments types.
     * @param args Arguments.
     */
    template<typename... Args>
    explicit Decorator1(Args&&... args);

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation();

private:
    /// Component.
    Component component_;
};

} // namespace decorator
} // namespace cpp_design_patterns

#include "decorator1.ipp"

#endif // DESIGN_PATTERNS_DECORATOR1_HPP

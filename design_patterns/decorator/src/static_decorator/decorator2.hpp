/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_DECORATOR2_HPP
#define DESIGN_PATTERNS_DECORATOR2_HPP

#include "valid_component.hpp"

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Decorator example.
 *
 * This decorator uses inheritance to handle the decorated component.
 *
 * @note In this case, there's no base class for the decorator comparing to the dynamic decorator,
 * using directly the Component as base class instead of a Decorator base class.
 *
 * @tparam Component Component type.
 */
template<ValidComponent Component>
class Decorator2 : private Component {
public:
    /**
     * @brief Constructor.
     *
     * @tparam Args Arguments types.
     * @param args Arguments.
     */
    template<typename... Args>
    explicit Decorator2(Args&&... args);

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation();
};

} // namespace decorator
} // namespace cpp_design_patterns

#include "decorator2.ipp"

#endif // DESIGN_PATTERNS_DECORATOR2_HPP

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_DECORATOR2_HPP
#define DESIGN_PATTERNS_CONCRETE_DECORATOR2_HPP

#include "decorator.hpp"

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Concrete decorator example.
 */
class ConcreteDecorator2 : public Decorator {
public:
    /**
     * @brief Constructor.
     *
     * @param component Component.
     */
    explicit ConcreteDecorator2(std::unique_ptr<ComponentBase> component);

    /**
     * @copydoc Decorator::operation
     */
    std::string operation() override;
};

} // namespace decorator
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_DECORATOR2_HPP

/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_DECORATOR1_HPP
#define DESIGN_PATTERNS_CONCRETE_DECORATOR1_HPP

#include "decorator.hpp"

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Concrete decorator example.
 */
class ConcreteDecorator1 : public Decorator {
public:
    /**
     * @brief Constructor.
     *
     * @param component Component.
     */
    explicit ConcreteDecorator1(std::unique_ptr<ComponentBase> component);

    /**
     * @copydoc Decorator::operation
     */
    std::string operation() override;
};

} // namespace decorator
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_DECORATOR1_HPP

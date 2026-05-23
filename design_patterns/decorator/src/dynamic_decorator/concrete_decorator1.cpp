/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "concrete_decorator1.hpp"

namespace cpp_design_patterns {
namespace decorator {

ConcreteDecorator1::ConcreteDecorator1(std::unique_ptr<ComponentBase> component)
    : Decorator(std::move(component))
{
}

std::string ConcreteDecorator1::operation()
{
    return Decorator::operation() + ", concrete decorator 1";
}

} // namespace decorator
} // namespace cpp_design_patterns

/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "concrete_decorator2.hpp"

namespace cpp_design_patterns {
namespace decorator {

ConcreteDecorator2::ConcreteDecorator2(std::unique_ptr<ComponentBase> component)
    : Decorator(std::move(component))
{
}

std::string ConcreteDecorator2::operation()
{
    return Decorator::operation() + ", concrete decorator 2";
}

} // namespace decorator
} // namespace cpp_design_patterns

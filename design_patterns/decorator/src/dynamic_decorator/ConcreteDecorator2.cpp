/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ConcreteDecorator2.h"

namespace cppDesignPatterns {
namespace decorator {

ConcreteDecorator2::ConcreteDecorator2(std::unique_ptr<IComponent> component)
    : Decorator(std::move(component))
{
}

std::string ConcreteDecorator2::operation()
{
    return mComponent->operation() + ", concrete decorator 2";
}

} // namespace decorator
} // namespace cppDesignPatterns

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ConcreteDecorator1.h"

namespace cppDesignPatterns {
namespace decorator {

ConcreteDecorator1::ConcreteDecorator1(std::unique_ptr<IComponent> component)
    : Decorator(std::move(component))
{
}

std::string ConcreteDecorator1::operation()
{
    return mComponent->operation() + ", concrete decorator 1";
}

} // namespace decorator
} // namespace cppDesignPatterns

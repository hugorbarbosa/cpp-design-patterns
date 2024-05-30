/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "Decorator.h"
#include <stdexcept>

namespace cppDesignPatterns {
namespace decorator {

Decorator::Decorator(std::unique_ptr<IComponent> component)
    : mComponent{std::move(component)}
{
    if (!mComponent) {
        throw std::invalid_argument("Invalid component");
    }
}

std::string Decorator::operation()
{
    return mComponent->operation();
}

} // namespace decorator
} // namespace cppDesignPatterns

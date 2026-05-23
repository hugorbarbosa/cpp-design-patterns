/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "decorator.hpp"
#include <stdexcept>

namespace cpp_design_patterns {
namespace decorator {

Decorator::Decorator(std::unique_ptr<ComponentBase> component)
    : component_{std::move(component)}
{
    if (!component_) {
        throw std::invalid_argument("Invalid component");
    }
}

std::string Decorator::operation()
{
    return component_->operation();
}

} // namespace decorator
} // namespace cpp_design_patterns

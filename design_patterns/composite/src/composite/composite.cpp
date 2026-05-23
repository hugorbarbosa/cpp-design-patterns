/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "composite.hpp"
#include <stdexcept>

namespace cpp_design_patterns {
namespace composite {

void Composite::operation()
{
    for (const auto& child : children_) {
        child->operation();
    }
}

void Composite::add(std::shared_ptr<Component> child)
{
    children_.push_back(std::move(child));
}

void Composite::remove(const uint8_t child_index)
{
    if (child_index < children_.size()) {
        children_.erase(children_.cbegin() + child_index);
    }
}

std::shared_ptr<Component> Composite::get_child(const uint8_t child_index)
{
    try {
        return children_.at(child_index);
    }
    catch (const std::out_of_range&) {
        return nullptr;
    }
}

} // namespace composite
} // namespace cpp_design_patterns

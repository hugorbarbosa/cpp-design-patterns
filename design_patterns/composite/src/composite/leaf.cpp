/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "leaf.hpp"
#include <iostream>
#include <string>

namespace cpp_design_patterns {
namespace composite {

Leaf::Leaf(const uint8_t id)
    : id_{id}
{
}

void Leaf::operation()
{
    std::cout << "Operation from leaf " << std::to_string(id_) << "\n";
}

void Leaf::add(std::shared_ptr<Component> /*child*/)
{
    // Do nothing.
}

void Leaf::remove(const uint8_t /*child_index*/)
{
    // Do nothing.
}

std::shared_ptr<Component> Leaf::get_child(const uint8_t /*child_index*/)
{
    return nullptr;
}

} // namespace composite
} // namespace cpp_design_patterns

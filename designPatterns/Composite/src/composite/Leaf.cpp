/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "Leaf.h"
#include <iostream>
#include <string>

namespace cppDesignPatterns {
namespace composite {

Leaf::Leaf(const uint8_t id)
    : cId{id}
{
}

void Leaf::operation()
{
    std::cout << "Operation from leaf " << std::to_string(cId) << std::endl;
}

void Leaf::add(std::shared_ptr<IComponent> /*child*/)
{
    // Do nothing.
}

void Leaf::remove(const uint8_t /*childIndex*/)
{
    // Do nothing.
}

std::shared_ptr<IComponent> Leaf::getChild(const uint8_t /*childIndex*/)
{
    return nullptr;
}

} // namespace composite
} // namespace cppDesignPatterns

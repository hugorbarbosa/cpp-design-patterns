/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "Composite.h"
#include <stdexcept>

namespace cppDesignPatterns {
namespace composite {

void Composite::operation()
{
    for (const auto& child : mChildren) {
        child->operation();
    }
}

void Composite::add(std::shared_ptr<IComponent> child)
{
    mChildren.push_back(std::move(child));
}

void Composite::remove(const uint8_t childIndex)
{
    if (childIndex < mChildren.size()) {
        mChildren.erase(mChildren.cbegin() + childIndex);
    }
}

std::shared_ptr<IComponent> Composite::getChild(const uint8_t childIndex)
{
    try {
        return mChildren.at(childIndex);
    }
    catch (const std::out_of_range&) {
        return nullptr;
    }
}

} // namespace composite
} // namespace cppDesignPatterns

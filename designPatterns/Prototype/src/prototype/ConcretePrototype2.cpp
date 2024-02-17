/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ConcretePrototype2.h"

namespace cppDesignPatterns {
namespace prototype {

ConcretePrototype2::ConcretePrototype2(std::string data)
    : mData{std::move(data)}
{
}

std::unique_ptr<IPrototype> ConcretePrototype2::clone() const
{
    // Copy construct this concrete prototype
    return std::make_unique<ConcretePrototype2>(*this);
}

std::string ConcretePrototype2::getData() const noexcept
{
    return mData;
}

} // namespace prototype
} // namespace cppDesignPatterns

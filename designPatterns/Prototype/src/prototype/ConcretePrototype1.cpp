/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ConcretePrototype1.h"

namespace cppDesignPatterns {
namespace prototype {

ConcretePrototype1::ConcretePrototype1(std::string data)
    : mData{std::move(data)}
{
}

std::unique_ptr<IPrototype> ConcretePrototype1::clone() const
{
    // Copy construct this concrete prototype.
    return std::make_unique<ConcretePrototype1>(*this);
}

std::string ConcretePrototype1::getData() const noexcept
{
    return mData;
}

} // namespace prototype
} // namespace cppDesignPatterns

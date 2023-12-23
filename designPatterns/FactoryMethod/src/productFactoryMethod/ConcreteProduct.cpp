/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteProduct.h"

namespace cppDesignPatterns {
namespace factoryMethod {

std::string ConcreteProductA::getInfo() const noexcept
{
    return "Concrete product A";
}

std::string ConcreteProductB::getInfo() const noexcept
{
    return "Concrete product B";
}

} // namespace factoryMethod
} // namespace cppDesignPatterns

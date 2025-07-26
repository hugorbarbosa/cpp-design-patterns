/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ConcreteFactory1.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

namespace cppDesignPatterns {
namespace abstractFactory {

std::unique_ptr<IProductA> ConcreteFactory1::createProductA() const noexcept
{
    return std::make_unique<ConcreteProductA1>();
}

std::unique_ptr<IProductB> ConcreteFactory1::createProductB() const noexcept
{
    return std::make_unique<ConcreteProductB1>();
}

} // namespace abstractFactory
} // namespace cppDesignPatterns

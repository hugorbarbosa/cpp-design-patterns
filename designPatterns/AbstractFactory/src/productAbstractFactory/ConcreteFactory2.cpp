/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ConcreteFactory2.h"
#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

namespace cppDesignPatterns {
namespace abstractFactory {

std::unique_ptr<IProductA> ConcreteFactory2::createProductA() const noexcept
{
    return std::make_unique<ConcreteProductA2>();
}

std::unique_ptr<IProductB> ConcreteFactory2::createProductB() const noexcept
{
    return std::make_unique<ConcreteProductB2>();
}

} // namespace abstractFactory
} // namespace cppDesignPatterns

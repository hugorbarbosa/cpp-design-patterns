/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteCreator.h"
#include "ConcreteProduct.h"

namespace cppDesignPatterns {
namespace factoryMethod {

std::unique_ptr<IProduct> ConcreteCreatorA::createProduct() const noexcept
{
    return std::make_unique<ConcreteProductA>();
}

std::unique_ptr<IProduct> ConcreteCreatorB::createProduct() const noexcept
{
    return std::make_unique<ConcreteProductB>();
}

} // namespace factoryMethod
} // namespace cppDesignPatterns

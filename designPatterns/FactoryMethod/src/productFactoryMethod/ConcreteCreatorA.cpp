/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteCreatorA.h"
#include "ConcreteProductA.h"

namespace cppDesignPatterns {
namespace factoryMethod {

std::unique_ptr<IProduct> ConcreteCreatorA::createProduct() const noexcept
{
    return std::make_unique<ConcreteProductA>();
}

} // namespace factoryMethod
} // namespace cppDesignPatterns

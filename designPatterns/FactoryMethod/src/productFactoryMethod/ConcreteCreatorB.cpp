/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteCreatorB.h"
#include "ConcreteProductB.h"

namespace cppDesignPatterns {
namespace factoryMethod {

std::unique_ptr<IProduct> ConcreteCreatorB::createProduct() const noexcept
{
    return std::make_unique<ConcreteProductB>();
}

} // namespace factoryMethod
} // namespace cppDesignPatterns

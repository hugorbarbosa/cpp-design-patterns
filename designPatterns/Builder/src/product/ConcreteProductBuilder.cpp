/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteProductBuilder.h"

namespace cppDesignPatterns {
namespace builder {
namespace product {

void ConcreteProductBuilder::buildPartA() noexcept
{
    mProduct.setPartA("Part A");
}

void ConcreteProductBuilder::buildPartB() noexcept
{
    mProduct.setPartB("Part B");
}

Product ConcreteProductBuilder::getResult() const noexcept
{
    return mProduct;
}

} // namespace product
} // namespace builder
} // namespace cppDesignPatterns

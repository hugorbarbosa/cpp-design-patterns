/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteProductBuilder.h"

namespace cppDesignPatterns {
namespace builder {

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

} // namespace builder
} // namespace cppDesignPatterns

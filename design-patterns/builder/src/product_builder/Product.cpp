/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "Product.h"

namespace cppDesignPatterns {
namespace builder {

void Product::setPartA(Part part) noexcept
{
    mPartA = std::move(part);
}

void Product::setPartB(Part part) noexcept
{
    mPartB = std::move(part);
}

std::string Product::getInfo() const noexcept
{
    std::string info{"A = " + mPartA + "; B = " + mPartB};
    return info;
}

} // namespace builder
} // namespace cppDesignPatterns

/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace builder {
namespace product {

/**
 * @brief Product that is created by the builder.
 */
class Product
{
public:
    /// Alias to the type of part.
    using Part = std::string;

    /**
     * @brief Set the part A.
     *
     * @param part Part to be set to the part A.
     */
    void setPartA(Part part) noexcept;

    /**
     * @brief Set the part B.
     *
     * @param part Part to be set to the part B.
     */
    void setPartB(Part part) noexcept;

    /**
     * @brief Get the product information.
     *
     * @return Product information.
     */
    std::string getInfo() const noexcept;

private:
    /// Part A of the product.
    Part mPartA{};
    /// Part B of the product.
    Part mPartB{};
};

} // namespace product
} // namespace builder
} // namespace cppDesignPatterns

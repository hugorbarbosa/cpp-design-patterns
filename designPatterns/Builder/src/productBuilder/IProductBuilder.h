/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

namespace cppDesignPatterns {
namespace builder {

// Forward declaration.
class Product;

/**
 * @brief Product builder interface.
 */
class IProductBuilder
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IProductBuilder() = default;

    /**
     * @brief Build the part A of the product.
     */
    virtual void buildPartA() noexcept = 0;

    /**
     * @brief Build the part B of the product.
     */
    virtual void buildPartB() noexcept = 0;

    /**
     * @brief Get the built product.
     */
    virtual Product getResult() const noexcept = 0;
};

} // namespace builder
} // namespace cppDesignPatterns

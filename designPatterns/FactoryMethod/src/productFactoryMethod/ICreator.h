/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include "IProduct.h"
#include <memory>

namespace cppDesignPatterns {
namespace factoryMethod {

/**
 * @brief Product creator interface.
 */
class ICreator
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~ICreator() = default;

    /**
     * @brief Create product.
     *
     * This method represents the factory method that creates the product.
     *
     * @return Created product.
     */
    virtual std::unique_ptr<IProduct> createProduct() const noexcept = 0;
};

} // namespace factoryMethod
} // namespace cppDesignPatterns

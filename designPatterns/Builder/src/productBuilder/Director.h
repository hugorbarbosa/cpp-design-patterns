/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include "IProductBuilder.h"
#include "Product.h"
#include <memory>

namespace cppDesignPatterns {
namespace builder {

/**
 * @brief Director of the product.
 *
 * This entity is responsible for the process to build the product.
 */
class Director
{
public:
    /**
     * @brief Constructor.
     *
     * @param builder Product builder.
     */
    explicit Director(std::unique_ptr<IProductBuilder> builder);

    /**
     * @brief Construct the product.
     *
     * @return Constructed product.
     */
    Product construct() noexcept;

private:
    /// Product builder.
    std::unique_ptr<IProductBuilder> mProductBuilder;
};

} // namespace builder
} // namespace cppDesignPatterns

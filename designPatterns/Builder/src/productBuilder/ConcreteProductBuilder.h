/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include "IProductBuilder.h"
#include "Product.h"

namespace cppDesignPatterns {
namespace builder {

/**
 * @brief Concrete product builder.
 */
class ConcreteProductBuilder : public IProductBuilder
{
public:
    /**
     * @copydoc IProductBuilder#buildPartA
     */
    void buildPartA() noexcept override;

    /**
     * @copydoc IProductBuilder#buildPartB
     */
    void buildPartB() noexcept override;

    /**
     * @copydoc IProductBuilder#getResult
     */
    Product getResult() const noexcept override;

private:
    /// Product.
    Product mProduct;
};

} // namespace builder
} // namespace cppDesignPatterns

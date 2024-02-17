/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include "ICreator.h"

namespace cppDesignPatterns {
namespace factoryMethod {

/**
 * @brief Concrete product creator B.
 */
class ConcreteCreatorB : public ICreator
{
public:
    /**
     * @copydoc ICreator#createProduct
     */
    std::unique_ptr<IProduct> createProduct() const noexcept override;
};

} // namespace factoryMethod
} // namespace cppDesignPatterns

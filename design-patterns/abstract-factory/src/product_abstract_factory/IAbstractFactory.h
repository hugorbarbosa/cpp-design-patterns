/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IProductA.h"
#include "IProductB.h"
#include <memory>

namespace cppDesignPatterns {
namespace abstractFactory {

/**
 * @brief Abstract factory interface.
 */
class IAbstractFactory
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IAbstractFactory() = default;

    /**
     * @brief Create product A.
     *
     * @return Created product.
     */
    virtual std::unique_ptr<IProductA> createProductA() const noexcept = 0;

    /**
     * @brief Create product B.
     *
     * @return Created product.
     */
    virtual std::unique_ptr<IProductB> createProductB() const noexcept = 0;
};

} // namespace abstractFactory
} // namespace cppDesignPatterns

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IAbstractFactory.h"

namespace cppDesignPatterns {
namespace abstractFactory {

/**
 * @brief Concrete factory 1.
 */
class ConcreteFactory1 : public IAbstractFactory
{
public:
    /**
     * @copydoc IAbstractFactory#createProductA
     */
    std::unique_ptr<IProductA> createProductA() const noexcept override;

    /**
     * @copydoc IAbstractFactory#createProductB
     */
    std::unique_ptr<IProductB> createProductB() const noexcept override;
};

} // namespace abstractFactory
} // namespace cppDesignPatterns

/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include "IProduct.h"

namespace cppDesignPatterns {
namespace factoryMethod {

/**
 * @brief Concrete product A.
 */
class ConcreteProductA : public IProduct
{
public:
    /**
     * @copydoc IProduct#getInfo
     */
    std::string getInfo() const noexcept override;
};

/**
 * @brief Concrete product B.
 */
class ConcreteProductB : public IProduct
{
public:
    /**
     * @copydoc IProduct#getInfo
     */
    std::string getInfo() const noexcept override;
};

} // namespace factoryMethod
} // namespace cppDesignPatterns

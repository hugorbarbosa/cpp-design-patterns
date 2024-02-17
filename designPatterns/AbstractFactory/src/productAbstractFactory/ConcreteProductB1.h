/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IProductB.h"

namespace cppDesignPatterns {
namespace abstractFactory {

/**
 * @brief Concrete product B1.
 */
class ConcreteProductB1 : public IProductB
{
public:
    /**
     * @copydoc IProductB#getInfo
     */
    std::string getInfo() const noexcept override;
};

} // namespace abstractFactory
} // namespace cppDesignPatterns

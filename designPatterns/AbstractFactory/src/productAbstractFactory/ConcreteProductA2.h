/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IProductA.h"

namespace cppDesignPatterns {
namespace abstractFactory {

/**
 * @brief Concrete product A2.
 */
class ConcreteProductA2 : public IProductA
{
public:
    /**
     * @copydoc IProductA#getInfo
     */
    std::string getInfo() const noexcept override;
};

} // namespace abstractFactory
} // namespace cppDesignPatterns

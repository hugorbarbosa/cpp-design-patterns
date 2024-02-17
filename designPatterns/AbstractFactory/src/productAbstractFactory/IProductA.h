/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace abstractFactory {

/**
 * @brief Product A interface.
 */
class IProductA
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IProductA() = default;

    /**
     * @brief Get the product A information.
     *
     * @return Product information.
     */
    virtual std::string getInfo() const noexcept = 0;
};

} // namespace abstractFactory
} // namespace cppDesignPatterns

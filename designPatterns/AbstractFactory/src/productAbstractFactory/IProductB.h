/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace abstractFactory {

/**
 * @brief Product B interface.
 */
class IProductB
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IProductB() = default;

    /**
     * @brief Get the product B information.
     */
    virtual std::string getInfo() const noexcept = 0;
};

} // namespace abstractFactory
} // namespace cppDesignPatterns

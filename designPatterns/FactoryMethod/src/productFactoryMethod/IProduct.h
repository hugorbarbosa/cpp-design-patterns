/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace factoryMethod {

/**
 * @brief Product interface.
 */
class IProduct
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IProduct() = default;

    /**
     * @brief Get the product information.
     */
    virtual std::string getInfo() const noexcept = 0;
};

} // namespace factoryMethod
} // namespace cppDesignPatterns

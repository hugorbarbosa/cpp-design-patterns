/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <memory>
#include <string>

namespace cppDesignPatterns {
namespace prototype {

/**
 * @brief Prototype interface.
 */
class IPrototype
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IPrototype() = default;

    /**
     * @brief Clone the prototype.
     *
     * @return Cloned prototype.
     */
    virtual std::unique_ptr<IPrototype> clone() const = 0;

    /**
     * @brief Get the prototype data.
     *
     * @return Prototype data.
     */
    virtual std::string getData() const noexcept = 0;
};

} // namespace prototype
} // namespace cppDesignPatterns

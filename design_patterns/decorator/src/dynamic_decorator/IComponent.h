/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace decorator {

/**
 * @brief Component interface.
 */
class IComponent
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IComponent() = default;

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    virtual std::string operation() = 0;
};

} // namespace decorator
} // namespace cppDesignPatterns

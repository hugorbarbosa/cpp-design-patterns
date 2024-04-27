/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace adapter {

/**
 * @brief Target interface, used by the clients.
 */
class ITarget
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~ITarget() = default;

    /**
     * @brief An example of operation.
     *
     * @return Result information.
     */
    virtual std::string operation() = 0;
};

} // namespace adapter
} // namespace cppDesignPatterns

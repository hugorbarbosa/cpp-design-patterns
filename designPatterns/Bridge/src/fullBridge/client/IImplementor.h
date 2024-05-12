/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace bridge {

/**
 * @brief Implementor interface.
 */
class IImplementor
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IImplementor() = default;

    /**
     * @brief An example of operation.
     *
     * @return Result information.
     */
    virtual std::string operationImpl() = 0;
};

} // namespace bridge
} // namespace cppDesignPatterns

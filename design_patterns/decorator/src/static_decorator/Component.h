/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace decorator {

/**
 * @brief Component example.
 *
 * @note In this case, there's no base class for the component comparing to the dynamic decorator.
 */
class Component
{
public:
    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation();
};

} // namespace decorator
} // namespace cppDesignPatterns

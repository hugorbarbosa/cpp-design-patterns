/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace adapter {

/**
 * @brief Adaptee that represents an existing entity with incompatible interface that needs to be adapted into another
 * interface clients expect.
 */
class Adaptee
{
public:
    /**
     * @brief Specific operation.
     *
     * @return Result information.
     */
    std::string specificOperation();
};

} // namespace adapter
} // namespace cppDesignPatterns

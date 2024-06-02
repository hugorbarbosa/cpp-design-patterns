/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace facade {

/**
 * @brief Subsystem B.
 *
 * This exemplifies a complex subsystem.
 */
class SubsystemB
{
public:
    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation();
};

} // namespace facade
} // namespace cppDesignPatterns

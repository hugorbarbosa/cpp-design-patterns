/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <Abstraction.h>

namespace cppDesignPatterns {
namespace bridge {

/**
 * @brief Refined abstraction.
 *
 * Extends the Abstraction.
 */
class RefinedAbstraction : public Abstraction
{
public:
    /**
     * @brief Constructor.
     */
    RefinedAbstraction();

    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operation() override;
};

} // namespace bridge
} // namespace cppDesignPatterns

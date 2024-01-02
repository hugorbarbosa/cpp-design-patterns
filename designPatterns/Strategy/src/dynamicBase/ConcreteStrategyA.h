/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include "IStrategy.h"

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicBase {

/**
 * @brief Concrete strategy A.
 */
class ConcreteStrategyA : public IStrategy
{
public:
    /**
     * @copydoc IStrategy#execute
     */
    void execute() noexcept override;
};

} // namespace dynamicBase
} // namespace strategy
} // namespace cppDesignPatterns

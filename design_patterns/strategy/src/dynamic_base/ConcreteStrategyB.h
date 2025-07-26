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
 * @brief Concrete strategy B.
 */
class ConcreteStrategyB : public IStrategy
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

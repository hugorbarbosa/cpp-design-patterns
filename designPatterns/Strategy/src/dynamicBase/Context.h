/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include "IStrategy.h"
#include <memory>

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicBase {

/**
 * @brief Context where the strategy is used.
 */
class Context
{
public:
    /**
     * @brief Constructor.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    explicit Context(std::unique_ptr<IStrategy> strategy);

    /**
     * @brief Set the strategy.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    void setStrategy(std::unique_ptr<IStrategy> strategy) noexcept;

    /**
     * @brief Execute the strategy.
     */
    void executeStrategy() noexcept;

private:
    /// Strategy to execute the algorithm.
    std::unique_ptr<IStrategy> mStrategy;
};

} // namespace dynamicBase
} // namespace strategy
} // namespace cppDesignPatterns

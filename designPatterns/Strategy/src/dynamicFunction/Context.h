/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include <functional>

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicFunction {

/**
 * @brief Context where the strategy is used.
 */
class Context
{
public:
    /// Alias to the Strategy function. The Strategy interface is defined as a function object.
    using Strategy = std::function<void()>;

    /**
     * @brief Constructor.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    explicit Context(Strategy strategy);

    /**
     * @brief Set the strategy.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    void setStrategy(Strategy strategy) noexcept;

    /**
     * @brief Execute the strategy.
     */
    void executeStrategy() noexcept;

private:
    /// Strategy to execute the algorithm.
    Strategy mStrategy;
};

} // namespace dynamicFunction
} // namespace strategy
} // namespace cppDesignPatterns

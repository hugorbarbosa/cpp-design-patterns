/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

namespace cppDesignPatterns {
namespace strategy {
namespace staticTemplate {

/**
 * @brief Context where the strategy is used.
 *
 * @tparam Strategy Type of strategy to execute the algorithm.
 */
template<typename Strategy>
class Context
{
public:
    /**
     * @brief Constructor.
     */
    Context() = default;

    /**
     * @brief Constructor.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    explicit Context(Strategy strategy);

    /**
     * @brief Execute the strategy.
     */
    void executeStrategy() noexcept;

private:
    /// Strategy to execute the algorithm.
    Strategy mStrategy;
};

} // namespace staticTemplate
} // namespace strategy
} // namespace cppDesignPatterns

#include "Context.ipp"

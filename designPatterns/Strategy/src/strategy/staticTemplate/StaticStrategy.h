/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include <iostream>

namespace cppDesignPatterns {
namespace strategy {
namespace staticTemplate {

/**
 * @brief Concrete strategy A.
 */
class ConcreteStrategyA
{
public:
    /**
     * @brief Execute algorithm.
     */
    void execute() noexcept
    {
        std::cout << "Executing strategy A" << std::endl;
    }
};

/**
 * @brief Concrete strategy B.
 */
class ConcreteStrategyB
{
public:
    /**
     * @brief Execute algorithm.
     */
    void execute() noexcept
    {
        std::cout << "Executing strategy B" << std::endl;
    }
};

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
    explicit Context(Strategy strategy)
        : mStrategy{std::move(strategy)}
    {
    }

    /**
     * @brief Execute the strategy.
     */
    void executeStrategy() noexcept
    {
        mStrategy.execute();
    }

private:
    /// Strategy to execute the algorithm.
    Strategy mStrategy;
};

} // namespace staticTemplate
} // namespace strategy
} // namespace cppDesignPatterns

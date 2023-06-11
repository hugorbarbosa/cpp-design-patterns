/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

#include <cassert>
#include <iostream>
#include <memory>

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicBase {

/**
 * @brief Strategy interface.
 */
class IStrategy
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IStrategy() = default;

    /**
     * @brief Execute algorithm.
     */
    virtual void execute() = 0;
};

/**
 * @brief Concrete strategy A.
 */
class ConcreteStrategyA : public IStrategy
{
public:
    /**
     * @copydoc IStrategy#execute
     */
    void execute() override
    {
        std::cout << "Executing strategy A" << std::endl;
    }
};

/**
 * @brief Concrete strategy B.
 */
class ConcreteStrategyB : public IStrategy
{
public:
    /**
     * @copydoc IStrategy#execute
     */
    void execute() override
    {
        std::cout << "Executing strategy B" << std::endl;
    }
};

/**
 * @brief Context where the strategy is used.
 */
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
    explicit Context(std::unique_ptr<IStrategy> strategy)
        : mStrategy{std::move(strategy)}
    {
        assert(mStrategy != nullptr);
    }

    /**
     * @brief Set the strategy.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    void setStrategy(std::unique_ptr<IStrategy> strategy)
    {
        assert(strategy != nullptr);
        mStrategy = std::move(strategy);
    }

    /**
     * @brief Execute the strategy.
     */
    void executeStrategy()
    {
        if (mStrategy) {
            mStrategy->execute();
        }
    }

private:
    /// Strategy to execute the algorithm.
    std::unique_ptr<IStrategy> mStrategy;
};

} // namespace dynamicBase
} // namespace strategy
} // namespace cppDesignPatterns

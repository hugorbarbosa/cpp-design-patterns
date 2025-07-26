/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "Context.h"

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicFunction {

Context::Context(Strategy strategy)
    : mStrategy{std::move(strategy)}
{
}

void Context::setStrategy(Strategy strategy) noexcept
{
    mStrategy = std::move(strategy);
}

void Context::executeStrategy() noexcept
{
    if (mStrategy) {
        mStrategy();
    }
}

} // namespace dynamicFunction
} // namespace strategy
} // namespace cppDesignPatterns


/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "Context.h"
#include <cassert>

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicBase {

Context::Context(std::unique_ptr<IStrategy> strategy)
    : mStrategy{std::move(strategy)}
{
    assert(mStrategy != nullptr);
}

void Context::setStrategy(std::unique_ptr<IStrategy> strategy) noexcept
{
    assert(strategy != nullptr);
    mStrategy = std::move(strategy);
}

void Context::executeStrategy() noexcept
{
    mStrategy->execute();
}

} // namespace dynamicBase
} // namespace strategy
} // namespace cppDesignPatterns

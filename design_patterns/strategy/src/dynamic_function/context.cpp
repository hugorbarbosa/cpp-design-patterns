/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "context.hpp"

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_function {

Context::Context(Strategy strategy)
    : strategy_{std::move(strategy)}
{
}

void Context::set_strategy(Strategy strategy) noexcept
{
    strategy_ = std::move(strategy);
}

void Context::execute_strategy() noexcept
{
    if (strategy_) {
        strategy_();
    }
}

} // namespace dynamic_function
} // namespace strategy
} // namespace cpp_design_patterns

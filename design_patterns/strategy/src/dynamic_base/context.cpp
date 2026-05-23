
/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "context.hpp"
#include <cassert>

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_base {

Context::Context(std::unique_ptr<Strategy> strategy)
    : strategy_{std::move(strategy)}
{
    assert(strategy_ != nullptr);
}

void Context::set_strategy(std::unique_ptr<Strategy> strategy) noexcept
{
    assert(strategy != nullptr);
    strategy_ = std::move(strategy);
}

void Context::execute_strategy() noexcept
{
    strategy_->execute();
}

} // namespace dynamic_base
} // namespace strategy
} // namespace cpp_design_patterns

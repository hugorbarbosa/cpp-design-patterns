/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include <utility>

namespace cpp_design_patterns {
namespace strategy {
namespace static_template {

template<typename Strategy>
Context<Strategy>::Context(Strategy strategy)
    : strategy_{std::move(strategy)}
{
}

template<typename Strategy>
void Context<Strategy>::execute_strategy() noexcept
{
    strategy_.execute();
}

} // namespace static_template
} // namespace strategy
} // namespace cpp_design_patterns

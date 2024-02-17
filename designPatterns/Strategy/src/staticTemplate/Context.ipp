/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include <utility>

namespace cppDesignPatterns {
namespace strategy {
namespace staticTemplate {

template<typename Strategy>
Context<Strategy>::Context(Strategy strategy)
    : mStrategy{std::move(strategy)}
{
}

template<typename Strategy>
void Context<Strategy>::executeStrategy() noexcept
{
    mStrategy.execute();
}

} // namespace staticTemplate
} // namespace strategy
} // namespace cppDesignPatterns

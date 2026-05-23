/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_CONTEXT_STATIC_HPP
#define DESIGN_PATTERNS_CONTEXT_STATIC_HPP

namespace cpp_design_patterns {
namespace strategy {
namespace static_template {

/**
 * @brief Context where the strategy is used.
 *
 * @tparam Strategy Type of strategy to execute the algorithm.
 */
template<typename Strategy>
class Context {
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
    void execute_strategy() noexcept;

private:
    /// Strategy to execute the algorithm.
    Strategy strategy_;
};

} // namespace static_template
} // namespace strategy
} // namespace cpp_design_patterns

#include "context.ipp"

#endif // DESIGN_PATTERNS_CONTEXT_STATIC_HPP

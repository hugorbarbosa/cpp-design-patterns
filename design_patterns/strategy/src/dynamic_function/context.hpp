/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CONTEXT_HPP
#define DESIGN_PATTERNS_CONTEXT_HPP

#include <functional>

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_function {

/**
 * @brief Context where the strategy is used.
 */
class Context {
public:
    /// Alias to the Strategy function. The Strategy interface is defined as a function object.
    using Strategy = std::function<void()>;

    /**
     * @brief Constructor.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    explicit Context(Strategy strategy);

    /**
     * @brief Set the strategy.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    void set_strategy(Strategy strategy) noexcept;

    /**
     * @brief Execute the strategy.
     */
    void execute_strategy() noexcept;

private:
    /// Strategy to execute the algorithm.
    Strategy strategy_;
};

} // namespace dynamic_function
} // namespace strategy
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONTEXT_HPP

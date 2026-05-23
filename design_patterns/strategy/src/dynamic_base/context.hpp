/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CONTEXT_DYNAMIC_HPP
#define DESIGN_PATTERNS_CONTEXT_DYNAMIC_HPP

#include <memory>
#include "strategy.hpp"

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_base {

/**
 * @brief Context where the strategy is used.
 */
class Context {
public:
    /**
     * @brief Constructor.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    explicit Context(std::unique_ptr<Strategy> strategy);

    /**
     * @brief Set the strategy.
     *
     * @param strategy Strategy to execute the algorithm.
     */
    void set_strategy(std::unique_ptr<Strategy> strategy) noexcept;

    /**
     * @brief Execute the strategy.
     */
    void execute_strategy() noexcept;

private:
    /// Strategy to execute the algorithm.
    std::unique_ptr<Strategy> strategy_;
};

} // namespace dynamic_base
} // namespace strategy
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONTEXT_DYNAMIC_HPP

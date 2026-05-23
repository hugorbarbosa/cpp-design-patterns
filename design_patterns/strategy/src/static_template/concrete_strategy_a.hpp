/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_STRATEGY_A_STATIC_HPP
#define DESIGN_PATTERNS_CONCRETE_STRATEGY_A_STATIC_HPP

namespace cpp_design_patterns {
namespace strategy {
namespace static_template {

/**
 * @brief Concrete strategy A.
 */
class ConcreteStrategyA {
public:
    /**
     * @brief Execute algorithm.
     */
    static void execute() noexcept;
};

} // namespace static_template
} // namespace strategy
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_STRATEGY_A_STATIC_HPP

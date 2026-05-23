/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_STRATEGY_A_DYNAMIC_HPP
#define DESIGN_PATTERNS_CONCRETE_STRATEGY_A_DYNAMIC_HPP

#include "strategy.hpp"

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_base {

/**
 * @brief Concrete strategy A.
 */
class ConcreteStrategyA : public Strategy {
public:
    /**
     * @copydoc Strategy::execute
     */
    void execute() noexcept override;
};

} // namespace dynamic_base
} // namespace strategy
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_STRATEGY_A_DYNAMIC_HPP

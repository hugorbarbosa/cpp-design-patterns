/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "concrete_strategy_a.hpp"
#include <iostream>

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_base {

void ConcreteStrategyA::execute() noexcept
{
    std::cout << "Executing strategy A\n";
}

} // namespace dynamic_base
} // namespace strategy
} // namespace cpp_design_patterns

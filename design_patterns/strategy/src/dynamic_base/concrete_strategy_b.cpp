/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "concrete_strategy_b.hpp"
#include <iostream>

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_base {

void ConcreteStrategyB::execute() noexcept
{
    std::cout << "Executing strategy B\n";
}

} // namespace dynamic_base
} // namespace strategy
} // namespace cpp_design_patterns

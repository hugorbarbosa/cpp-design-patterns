/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
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

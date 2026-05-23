/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "concrete_strategy_b.hpp"
#include <iostream>

namespace cpp_design_patterns {
namespace strategy {
namespace static_template {

void ConcreteStrategyB::execute() noexcept
{
    std::cout << "Executing strategy B\n";
}

} // namespace static_template
} // namespace strategy
} // namespace cpp_design_patterns

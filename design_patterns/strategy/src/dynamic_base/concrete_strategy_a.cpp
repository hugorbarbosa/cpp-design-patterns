/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "concrete_strategy_a.hpp"
#include <iostream>

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_base {

void ConcreteStrategyA::execute() noexcept
{
    std::cout << "Executing strategy A\n";
    int* a = new int[10];
    auto x = a[5]; // Use of uninitialized value.
    std::cout << "x = " << x << "\n";
}

} // namespace dynamic_base
} // namespace strategy
} // namespace cpp_design_patterns

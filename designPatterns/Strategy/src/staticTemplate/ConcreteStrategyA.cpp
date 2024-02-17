/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteStrategyA.h"
#include <iostream>

namespace cppDesignPatterns {
namespace strategy {
namespace staticTemplate {

void ConcreteStrategyA::execute() noexcept
{
    std::cout << "Executing strategy A" << std::endl;
}

} // namespace staticTemplate
} // namespace strategy
} // namespace cppDesignPatterns

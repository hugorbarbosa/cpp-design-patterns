/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteStrategyB.h"
#include <iostream>

namespace cppDesignPatterns {
namespace strategy {
namespace staticTemplate {

void ConcreteStrategyB::execute() noexcept
{
    std::cout << "Executing strategy B" << std::endl;
}

} // namespace staticTemplate
} // namespace strategy
} // namespace cppDesignPatterns

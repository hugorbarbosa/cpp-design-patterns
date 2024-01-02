/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteStrategyB.h"
#include <iostream>

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicBase {

void ConcreteStrategyB::execute() noexcept
{
    std::cout << "Executing strategy B" << std::endl;
}

} // namespace dynamicBase
} // namespace strategy
} // namespace cppDesignPatterns

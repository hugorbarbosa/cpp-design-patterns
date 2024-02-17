/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "ConcreteStrategyA.h"
#include <iostream>

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicBase {

void ConcreteStrategyA::execute() noexcept
{
    std::cout << "Executing strategy A" << std::endl;
}

} // namespace dynamicBase
} // namespace strategy
} // namespace cppDesignPatterns

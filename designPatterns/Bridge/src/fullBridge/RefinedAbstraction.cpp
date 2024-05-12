/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "RefinedAbstraction.h"
#include "ConcreteImplementor.h"

namespace cppDesignPatterns {
namespace bridge {

RefinedAbstraction::RefinedAbstraction()
    : Abstraction(std::make_unique<ConcreteImplementor>())
{
}

std::string RefinedAbstraction::operation()
{
    return getImplementor()->operationImpl();
}

} // namespace bridge
} // namespace cppDesignPatterns

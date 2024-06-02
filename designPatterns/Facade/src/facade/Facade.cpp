/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "Facade.h"

namespace cppDesignPatterns {
namespace facade {

std::string Facade::operation1()
{
    // This operation contains the operations from both subsystems A and B.
    return mSubsystemA.operation() + " and " + mSubsystemB.operation();
}

std::string Facade::operation2()
{
    // This operation contains only the operation from subsystem A.
    return mSubsystemA.operation();
}

} // namespace facade
} // namespace cppDesignPatterns

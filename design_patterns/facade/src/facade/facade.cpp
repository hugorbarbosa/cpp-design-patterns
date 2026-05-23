/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "facade.hpp"

namespace cpp_design_patterns {
namespace facade {

std::string Facade::operation1()
{
    // This operation contains the operations from both subsystems A and B.
    return subsystem_a_.operation() + " and " + subsystem_b_.operation();
}

std::string Facade::operation2()
{
    // This operation contains only the operation from subsystem A.
    return subsystem_b_.operation();
}

} // namespace facade
} // namespace cpp_design_patterns

/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "refined_abstraction.hpp"
#include "concrete_implementor.hpp"

namespace cpp_design_patterns {
namespace bridge {

RefinedAbstraction::RefinedAbstraction()
    : Abstraction(std::make_unique<ConcreteImplementor>())
{
}

std::string RefinedAbstraction::operation()
{
    return get_implementor()->operation_impl();
}

} // namespace bridge
} // namespace cpp_design_patterns

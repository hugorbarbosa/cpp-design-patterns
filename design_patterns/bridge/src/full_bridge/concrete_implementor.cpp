/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "concrete_implementor.hpp"

namespace cpp_design_patterns {
namespace bridge {

std::string ConcreteImplementor::operation_impl()
{
    return "Operation from concrete implementor";
}

} // namespace bridge
} // namespace cpp_design_patterns

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "subsystem_a.hpp"

namespace cpp_design_patterns {
namespace facade {

SubsystemA::SubsystemA(std::string data) noexcept
    : data_{std::move(data)}
{
}

std::string SubsystemA::operation()
{
    return "Subsystem A operation: " + data_;
}

} // namespace facade
} // namespace cpp_design_patterns

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "subsystem_b.hpp"

namespace cpp_design_patterns {
namespace facade {

SubsystemB::SubsystemB(std::string data) noexcept
    : data_{std::move(data)}
{
}

std::string SubsystemB::operation()
{
    return "Subsystem B operation: " + data_;
}

} // namespace facade
} // namespace cpp_design_patterns

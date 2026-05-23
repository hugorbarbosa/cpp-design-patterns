/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "object_adapter.hpp"

namespace cpp_design_patterns {
namespace adapter {

ObjectAdapter::ObjectAdapter(std::unique_ptr<Adaptee> adaptee)
    : adaptee_{std::move(adaptee)}
{
}

std::string ObjectAdapter::operation()
{
    return adaptee_->specific_operation();
}

} // namespace adapter
} // namespace cpp_design_patterns

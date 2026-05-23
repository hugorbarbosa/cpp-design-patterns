/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "class_adapter.hpp"

namespace cpp_design_patterns {
namespace adapter {

std::string ClassAdapter::operation()
{
    return specific_operation();
}

} // namespace adapter
} // namespace cpp_design_patterns

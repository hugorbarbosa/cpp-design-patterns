/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ClassAdapter.h"

namespace cppDesignPatterns {
namespace adapter {

std::string ClassAdapter::operation()
{
    return this->specificOperation();
}

} // namespace adapter
} // namespace cppDesignPatterns

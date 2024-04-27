/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "ObjectAdapter.h"

namespace cppDesignPatterns {
namespace adapter {

ObjectAdapter::ObjectAdapter(std::unique_ptr<Adaptee> adaptee)
    : mAdaptee{std::move(adaptee)}
{
}

std::string ObjectAdapter::operation()
{
    return mAdaptee->specificOperation();
}

} // namespace adapter
} // namespace cppDesignPatterns

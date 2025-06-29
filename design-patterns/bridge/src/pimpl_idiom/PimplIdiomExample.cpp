/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "PimplIdiomExample.h"

namespace cppDesignPatterns {
namespace bridge {

/**
 * @brief Example of an implementation structure.
 */
struct PimplIdiomExample::Impl
{
    /// Example of a string member.
    std::string mString{"Example of a string"};
    /// Example of a numeric member.
    uint8_t mNumeric{42};
};

PimplIdiomExample::PimplIdiomExample()
    : mPimpl{std::make_unique<Impl>()}
{
}

PimplIdiomExample::~PimplIdiomExample() = default;

PimplIdiomExample::PimplIdiomExample(const PimplIdiomExample& other)
    : mPimpl{std::make_unique<Impl>(*other.mPimpl)}
{
}

PimplIdiomExample& PimplIdiomExample::operator=(const PimplIdiomExample& other)
{
    *mPimpl = *other.mPimpl;
    return *this;
}

PimplIdiomExample::PimplIdiomExample(PimplIdiomExample&& other) = default;

PimplIdiomExample& PimplIdiomExample::operator=(PimplIdiomExample&& other) = default;

std::string PimplIdiomExample::getStringValue() const noexcept
{
    return mPimpl->mString;
}

uint8_t PimplIdiomExample::getNumericValue() const noexcept
{
    return mPimpl->mNumeric;
}

} // namespace bridge
} // namespace cppDesignPatterns

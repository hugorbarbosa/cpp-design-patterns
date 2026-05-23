/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "pimpl_idiom_example.hpp"

namespace cpp_design_patterns {
namespace bridge {

/**
 * @brief Example of an implementation structure.
 */
struct PimplIdiomExample::Impl {
    /// Example of a string member.
    std::string string{"Example of a string"};
    /// Example of a numeric member.
    uint8_t numeric{42};
};

PimplIdiomExample::PimplIdiomExample()
    : pimpl_{std::make_unique<Impl>()}
{
}

PimplIdiomExample::~PimplIdiomExample() = default;

PimplIdiomExample::PimplIdiomExample(const PimplIdiomExample& other)
    : pimpl_{std::make_unique<Impl>(*other.pimpl_)}
{
}

PimplIdiomExample& PimplIdiomExample::operator=(const PimplIdiomExample& other)
{
    *pimpl_ = *other.pimpl_;
    return *this;
}

PimplIdiomExample::PimplIdiomExample(PimplIdiomExample&& other) noexcept = default;

PimplIdiomExample& PimplIdiomExample::operator=(PimplIdiomExample&& other) noexcept = default;

std::string PimplIdiomExample::get_string_value() const noexcept
{
    return pimpl_->string;
}

uint8_t PimplIdiomExample::get_numeric_value() const noexcept
{
    return pimpl_->numeric;
}

} // namespace bridge
} // namespace cpp_design_patterns

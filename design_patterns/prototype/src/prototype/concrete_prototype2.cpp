/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "concrete_prototype2.hpp"

namespace cpp_design_patterns {
namespace prototype {

ConcretePrototype2::ConcretePrototype2(std::string data)
    : data_{std::move(data)}
{
}

std::unique_ptr<Prototype> ConcretePrototype2::clone() const
{
    // Copy construct this concrete prototype.
    return std::make_unique<ConcretePrototype2>(*this);
}

std::string ConcretePrototype2::get_data() const noexcept
{
    return data_;
}

} // namespace prototype
} // namespace cpp_design_patterns

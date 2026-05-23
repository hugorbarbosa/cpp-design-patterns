/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "concrete_prototype1.hpp"

namespace cpp_design_patterns {
namespace prototype {

ConcretePrototype1::ConcretePrototype1(std::string data)
    : data_{std::move(data)}
{
}

std::unique_ptr<Prototype> ConcretePrototype1::clone() const
{
    // Copy construct this concrete prototype.
    return std::make_unique<ConcretePrototype1>(*this);
}

std::string ConcretePrototype1::get_data() const noexcept
{
    return data_;
}

} // namespace prototype
} // namespace cpp_design_patterns

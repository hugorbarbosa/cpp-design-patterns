/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "concrete_product_b.hpp"

namespace cpp_design_patterns {
namespace factory_method {

std::string ConcreteProductB::get_info() const noexcept
{
    return "Concrete product B";
}

} // namespace factory_method
} // namespace cpp_design_patterns

/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "concrete_product_a.hpp"

namespace cpp_design_patterns {
namespace factory_method {

std::string ConcreteProductA::get_info() const noexcept
{
    return "Concrete product A";
}

} // namespace factory_method
} // namespace cpp_design_patterns

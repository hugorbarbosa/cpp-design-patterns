/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "concrete_factory2.hpp"
#include "concrete_productA2.hpp"
#include "concrete_productB2.hpp"

namespace cpp_design_patterns {
namespace abstract_factory {

std::unique_ptr<ProductA> ConcreteFactory2::create_product_a() const noexcept
{
    return std::make_unique<ConcreteProductA2>();
}

std::unique_ptr<ProductB> ConcreteFactory2::create_product_b() const noexcept
{
    return std::make_unique<ConcreteProductB2>();
}

} // namespace abstract_factory
} // namespace cpp_design_patterns

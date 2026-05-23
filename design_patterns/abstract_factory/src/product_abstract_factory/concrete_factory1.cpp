/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "concrete_factory1.hpp"
#include "concrete_productA1.hpp"
#include "concrete_productB1.hpp"

namespace cpp_design_patterns {
namespace abstract_factory {

std::unique_ptr<ProductA> ConcreteFactory1::create_product_a() const noexcept
{
    return std::make_unique<ConcreteProductA1>();
}

std::unique_ptr<ProductB> ConcreteFactory1::create_product_b() const noexcept
{
    return std::make_unique<ConcreteProductB1>();
}

} // namespace abstract_factory
} // namespace cpp_design_patterns

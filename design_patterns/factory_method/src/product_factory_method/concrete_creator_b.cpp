/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "concrete_creator_b.hpp"
#include "concrete_product_b.hpp"

namespace cpp_design_patterns {
namespace factory_method {

std::unique_ptr<Product> ConcreteCreatorB::create_product() const noexcept
{
    return std::make_unique<ConcreteProductB>();
}

} // namespace factory_method
} // namespace cpp_design_patterns

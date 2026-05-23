/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "concrete_creator_a.hpp"
#include "concrete_product_a.hpp"

namespace cpp_design_patterns {
namespace factory_method {

std::unique_ptr<Product> ConcreteCreatorA::create_product() const noexcept
{
    return std::make_unique<ConcreteProductA>();
}

} // namespace factory_method
} // namespace cpp_design_patterns

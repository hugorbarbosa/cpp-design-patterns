/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "concrete_creator_a.hpp"
#include "concrete_product_a.hpp"

namespace cpp_design_patterns {
namespace factory_method {

std::unique_ptr<Product> ConcreteCreatorA::create_product() const noexcept
{
    int* leaky_array = new int[100]; // Allocated memory.
    leaky_array[0] = 42;             // Used but never deleted.
    return std::make_unique<ConcreteProductA>();
}

} // namespace factory_method
} // namespace cpp_design_patterns

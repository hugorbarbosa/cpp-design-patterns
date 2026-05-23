/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "concrete_product_builder.hpp"

namespace cpp_design_patterns {
namespace builder {

void ConcreteProductBuilder::build_part_a() noexcept
{
    product_.set_part_a("Part A");
}

void ConcreteProductBuilder::build_part_b() noexcept
{
    product_.set_part_b("Part B");
}

Product ConcreteProductBuilder::get_result() const noexcept
{
    return product_;
}

} // namespace builder
} // namespace cpp_design_patterns

/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "product.hpp"

namespace cpp_design_patterns {
namespace builder {

void Product::set_part_a(Part part) noexcept
{
    part_a_ = std::move(part);
}

void Product::set_part_b(Part part) noexcept
{
    part_b_ = std::move(part);
}

std::string Product::get_info() const noexcept
{
    std::string info{"A = " + part_a_ + "; B = " + part_b_};
    return info;
}

} // namespace builder
} // namespace cpp_design_patterns

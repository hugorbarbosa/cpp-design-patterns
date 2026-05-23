/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "director.hpp"
#include <cassert>

namespace cpp_design_patterns {
namespace builder {

Director::Director(std::unique_ptr<ProductBuilder> builder)
    : product_builder_{std::move(builder)}
{
    assert(product_builder_ != nullptr);
}

Product Director::construct() noexcept
{
    // Process to build the product.
    product_builder_->build_part_a();
    product_builder_->build_part_b();

    return product_builder_->get_result();
}

} // namespace builder
} // namespace cpp_design_patterns

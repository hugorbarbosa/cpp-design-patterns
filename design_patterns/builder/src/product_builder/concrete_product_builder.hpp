/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCT_BUILDER_HPP
#define DESIGN_PATTERNS_CONCRETE_PRODUCT_BUILDER_HPP

#include "product.hpp"
#include "product_builder.hpp"

namespace cpp_design_patterns {
namespace builder {

/**
 * @brief Concrete product builder.
 */
class ConcreteProductBuilder : public ProductBuilder {
public:
    /**
     * @copydoc ProductBuilder::build_part_a
     */
    void build_part_a() noexcept override;

    /**
     * @copydoc ProductBuilder::build_part_b
     */
    void build_part_b() noexcept override;

    /**
     * @copydoc ProductBuilder::get_result
     */
    Product get_result() const noexcept override;

private:
    /// Product.
    Product product_;
};

} // namespace builder
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_PRODUCT_BUILDER_HPP

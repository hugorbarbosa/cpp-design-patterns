/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_PRODUCT_HPP
#define DESIGN_PATTERNS_PRODUCT_HPP

#include <string>

namespace cpp_design_patterns {
namespace builder {

/**
 * @brief Product that is created by the builder.
 */
class Product {
public:
    /// Alias to the type of part.
    using Part = std::string;

    /**
     * @brief Set the part A.
     *
     * @param part Part to be set to the part A.
     */
    void set_part_a(Part part) noexcept;

    /**
     * @brief Set the part B.
     *
     * @param part Part to be set to the part B.
     */
    void set_part_b(Part part) noexcept;

    /**
     * @brief Get the product information.
     *
     * @return Product information.
     */
    std::string get_info() const noexcept;

private:
    /// Part A of the product.
    Part part_a_;
    /// Part B of the product.
    Part part_b_;
};

} // namespace builder
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_PRODUCT_HPP

/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_DIRECTOR_HPP
#define DESIGN_PATTERNS_DIRECTOR_HPP

#include <memory>
#include "product.hpp"
#include "product_builder.hpp"

namespace cpp_design_patterns {
namespace builder {

/**
 * @brief Director of the product.
 *
 * This entity is responsible for the process to build the product.
 */
class Director {
public:
    /**
     * @brief Constructor.
     *
     * @param builder Product builder.
     */
    explicit Director(std::unique_ptr<ProductBuilder> builder);

    /**
     * @brief Construct the product.
     *
     * @return Constructed product.
     */
    Product construct() noexcept;

private:
    /// Product builder.
    std::unique_ptr<ProductBuilder> product_builder_;
};

} // namespace builder
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_DIRECTOR_HPP

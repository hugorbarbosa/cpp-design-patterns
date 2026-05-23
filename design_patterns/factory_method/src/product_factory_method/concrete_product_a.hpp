/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCT_A_HPP
#define DESIGN_PATTERNS_CONCRETE_PRODUCT_A_HPP

#include "product.hpp"

namespace cpp_design_patterns {
namespace factory_method {

/**
 * @brief Concrete product A.
 */
class ConcreteProductA : public Product {
public:
    /**
     * @copydoc Product::get_info
     */
    std::string get_info() const noexcept override;
};

} // namespace factory_method
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_PRODUCT_A_HPP

/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCT_B_HPP
#define DESIGN_PATTERNS_CONCRETE_PRODUCT_B_HPP

#include "product.hpp"

namespace cpp_design_patterns {
namespace factory_method {

/**
 * @brief Concrete product B.
 */
class ConcreteProductB : public Product {
public:
    /**
     * @copydoc Product::get_info
     */
    std::string get_info() const noexcept override;
};

} // namespace factory_method
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_PRODUCT_B_HPP

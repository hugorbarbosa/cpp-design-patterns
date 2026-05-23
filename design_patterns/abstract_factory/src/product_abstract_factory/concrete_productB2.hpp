/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCT_B2_HPP
#define DESIGN_PATTERNS_CONCRETE_PRODUCT_B2_HPP

#include "productB.hpp"

namespace cpp_design_patterns {
namespace abstract_factory {

/**
 * @brief Concrete product B2.
 */
class ConcreteProductB2 : public ProductB {
public:
    /**
     * @copydoc ProductB::get_info
     */
    std::string get_info() const noexcept override;
};

} // namespace abstract_factory
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_PRODUCT_B2_HPP

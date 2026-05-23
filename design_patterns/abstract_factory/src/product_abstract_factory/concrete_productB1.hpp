/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCT_B1_HPP
#define DESIGN_PATTERNS_CONCRETE_PRODUCT_B1_HPP

#include "productB.hpp"

namespace cpp_design_patterns {
namespace abstract_factory {

/**
 * @brief Concrete product B1.
 */
class ConcreteProductB1 : public ProductB {
public:
    /**
     * @copydoc ProductB::get_info
     */
    std::string get_info() const noexcept override;
};

} // namespace abstract_factory
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_PRODUCT_B1_HPP

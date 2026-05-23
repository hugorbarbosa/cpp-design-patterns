/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_PRODUCT_A1_HPP
#define DESIGN_PATTERNS_CONCRETE_PRODUCT_A1_HPP

#include "productA.hpp"

namespace cpp_design_patterns {
namespace abstract_factory {

/**
 * @brief Concrete product A1.
 */
class ConcreteProductA1 : public ProductA {
public:
    /**
     * @copydoc ProductA::get_info
     */
    std::string get_info() const noexcept override;
};

} // namespace abstract_factory
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_PRODUCT_A1_HPP

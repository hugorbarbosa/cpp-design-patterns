/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_FACTORY_1_HPP
#define DESIGN_PATTERNS_CONCRETE_FACTORY_1_HPP

#include "abstract_factory.hpp"

namespace cpp_design_patterns {
namespace abstract_factory {

/**
 * @brief Concrete factory 1.
 */
class ConcreteFactory1 : public AbstractFactory {
public:
    /**
     * @copydoc AbstractFactory::create_product_a
     */
    std::unique_ptr<ProductA> create_product_a() const noexcept override;

    /**
     * @copydoc AbstractFactory::create_product_b
     */
    std::unique_ptr<ProductB> create_product_b() const noexcept override;
};

} // namespace abstract_factory
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_FACTORY_1_HPP

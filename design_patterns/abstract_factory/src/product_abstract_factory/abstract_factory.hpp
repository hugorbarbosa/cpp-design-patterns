/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_ABSTRACT_FACTORY_HPP
#define DESIGN_PATTERNS_ABSTRACT_FACTORY_HPP

#include <memory>
#include "productA.hpp"
#include "productB.hpp"

namespace cpp_design_patterns {
namespace abstract_factory {

/**
 * @brief Abstract factory interface.
 */
class AbstractFactory {
public:
    /**
     * @brief Destructor.
     */
    virtual ~AbstractFactory() = default;

    /**
     * @brief Copy constructor deleted.
     */
    AbstractFactory(const AbstractFactory&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    AbstractFactory& operator=(const AbstractFactory&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    AbstractFactory(AbstractFactory&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    AbstractFactory& operator=(AbstractFactory&&) = delete;

    /**
     * @brief Create product A.
     *
     * @return Created product.
     */
    virtual std::unique_ptr<ProductA> create_product_a() const noexcept = 0;

    /**
     * @brief Create product B.
     *
     * @return Created product.
     */
    virtual std::unique_ptr<ProductB> create_product_b() const noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    AbstractFactory() = default;
};

} // namespace abstract_factory
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_ABSTRACT_FACTORY_HPP

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_PRODUCT_A_HPP
#define DESIGN_PATTERNS_PRODUCT_A_HPP

#include <string>

namespace cpp_design_patterns {
namespace abstract_factory {

/**
 * @brief Product A interface.
 */
class ProductA {
public:
    /**
     * @brief Destructor.
     */
    virtual ~ProductA() = default;

    /**
     * @brief Copy constructor deleted.
     */
    ProductA(const ProductA&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    ProductA& operator=(const ProductA&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    ProductA(ProductA&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    ProductA& operator=(ProductA&&) = delete;

    /**
     * @brief Get the product A information.
     *
     * @return Product information.
     */
    virtual std::string get_info() const noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    ProductA() = default;
};

} // namespace abstract_factory
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_PRODUCT_A_HPP

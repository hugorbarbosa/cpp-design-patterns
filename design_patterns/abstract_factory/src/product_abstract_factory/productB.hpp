/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_PRODUCT_B_HPP
#define DESIGN_PATTERNS_PRODUCT_B_HPP

#include <string>

namespace cpp_design_patterns {
namespace abstract_factory {

/**
 * @brief Product B interface.
 */
class ProductB {
public:
    /**
     * @brief Destructor.
     */
    virtual ~ProductB() = default;

    /**
     * @brief Copy constructor deleted.
     */
    ProductB(const ProductB&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    ProductB& operator=(const ProductB&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    ProductB(ProductB&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    ProductB& operator=(ProductB&&) = delete;

    /**
     * @brief Get the product B information.
     *
     * @return Product information.
     */
    virtual std::string get_info() const noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    ProductB() = default;
};

} // namespace abstract_factory
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_PRODUCT_B_HPP

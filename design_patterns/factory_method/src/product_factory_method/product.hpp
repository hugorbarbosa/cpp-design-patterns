/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_PRODUCT_HPP
#define DESIGN_PATTERNS_PRODUCT_HPP

#include <string>

namespace cpp_design_patterns {
namespace factory_method {

/**
 * @brief Product interface.
 */
class Product {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Product() = default;

    /**
     * @brief Copy constructor deleted.
     */
    Product(const Product&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    Product& operator=(const Product&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    Product(Product&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    Product& operator=(Product&&) = delete;

    /**
     * @brief Get the product information.
     *
     * @return Product information.
     */
    virtual std::string get_info() const noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    Product() = default;
};

} // namespace factory_method
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_PRODUCT_HPP

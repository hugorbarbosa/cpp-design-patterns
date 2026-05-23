/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_PRODUCT_BUILDER_HPP
#define DESIGN_PATTERNS_PRODUCT_BUILDER_HPP

namespace cpp_design_patterns {
namespace builder {

// Forward declaration.
class Product;

/**
 * @brief Product builder interface.
 */
class ProductBuilder {
public:
    /**
     * @brief Destructor.
     */
    virtual ~ProductBuilder() = default;

    /**
     * @brief Copy constructor deleted.
     */
    ProductBuilder(const ProductBuilder&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    ProductBuilder& operator=(const ProductBuilder&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    ProductBuilder(ProductBuilder&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    ProductBuilder& operator=(ProductBuilder&&) = delete;

    /**
     * @brief Build the part A of the product.
     */
    virtual void build_part_a() noexcept = 0;

    /**
     * @brief Build the part B of the product.
     */
    virtual void build_part_b() noexcept = 0;

    /**
     * @brief Get the built product.
     *
     * @return Built product.
     */
    virtual Product get_result() const noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    ProductBuilder() = default;
};

} // namespace builder
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_PRODUCT_BUILDER_HPP

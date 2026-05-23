/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CREATOR_HPP
#define DESIGN_PATTERNS_CREATOR_HPP

#include <memory>
#include "product.hpp"

namespace cpp_design_patterns {
namespace factory_method {

/**
 * @brief Product creator interface.
 */
class Creator {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Creator() = default;

    /**
     * @brief Copy constructor deleted.
     */
    Creator(const Creator&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    Creator& operator=(const Creator&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    Creator(Creator&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    Creator& operator=(Creator&&) = delete;

    /**
     * @brief Create product.
     *
     * This method represents the factory method that creates the product.
     *
     * @return Created product.
     */
    virtual std::unique_ptr<Product> create_product() const noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    Creator() = default;
};

} // namespace factory_method
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CREATOR_HPP

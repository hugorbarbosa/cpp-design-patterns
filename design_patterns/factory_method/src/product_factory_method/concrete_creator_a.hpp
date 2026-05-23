/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_CREATOR_A_HPP
#define DESIGN_PATTERNS_CONCRETE_CREATOR_A_HPP

#include "creator.hpp"

namespace cpp_design_patterns {
namespace factory_method {

/**
 * @brief Concrete product creator A.
 */
class ConcreteCreatorA : public Creator {
public:
    /**
     * @copydoc Creator::create_product
     */
    std::unique_ptr<Product> create_product() const noexcept override;
};

} // namespace factory_method
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_CREATOR_A_HPP

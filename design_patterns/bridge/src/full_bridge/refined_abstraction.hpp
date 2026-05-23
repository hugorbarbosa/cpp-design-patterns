/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_REFINED_ABSTRACTION_HPP
#define DESIGN_PATTERNS_REFINED_ABSTRACTION_HPP

#include <abstraction.hpp>

namespace cpp_design_patterns {
namespace bridge {

/**
 * @brief Refined abstraction.
 *
 * Extends the Abstraction.
 */
class RefinedAbstraction : public Abstraction {
public:
    /**
     * @brief Constructor.
     */
    RefinedAbstraction();

    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operation() override;
};

} // namespace bridge
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_REFINED_ABSTRACTION_HPP

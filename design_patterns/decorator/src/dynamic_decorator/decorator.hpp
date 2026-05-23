/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_DECORATOR_HPP
#define DESIGN_PATTERNS_DECORATOR_HPP

#include <memory>
#include "component_base.hpp"

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Decorator.
 */
class Decorator : public ComponentBase {
public:
    /**
     * @brief Constructor.
     *
     * @param component Component.
     */
    explicit Decorator(std::unique_ptr<ComponentBase> component);

    /**
     * @copydoc ComponentBase::operation
     */
    std::string operation() override;

private:
    /// Component.
    std::unique_ptr<ComponentBase> component_;
};

} // namespace decorator
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_DECORATOR_HPP

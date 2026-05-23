/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_COMPONENT_HPP
#define DESIGN_PATTERNS_CONCRETE_COMPONENT_HPP

#include "component_base.hpp"

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Concrete component example.
 */
class ConcreteComponent : public ComponentBase {
public:
    /**
     * @copydoc ComponentBase::operation
     */
    std::string operation() override;
};

} // namespace decorator
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_COMPONENT_HPP

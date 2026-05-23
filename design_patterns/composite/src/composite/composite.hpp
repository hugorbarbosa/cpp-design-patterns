/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_COMPOSITE_HPP
#define DESIGN_PATTERNS_COMPOSITE_HPP

#include <vector>
#include "component.hpp"

namespace cpp_design_patterns {
namespace composite {

/**
 * @brief Composite example.
 */
class Composite : public Component {
public:
    /**
     * @copydoc Component::operation
     */
    void operation() override;

    /**
     * @copydoc Component::add
     */
    void add(std::shared_ptr<Component> child) override;

    /**
     * @copydoc Component::remove
     */
    void remove(const uint8_t child_index) override;

    /**
     * @copydoc Component::get_child
     */
    std::shared_ptr<Component> get_child(const uint8_t child_index) override;

private:
    /// Container with the children.
    std::vector<std::shared_ptr<Component>> children_;
};

} // namespace composite
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_COMPOSITE_HPP

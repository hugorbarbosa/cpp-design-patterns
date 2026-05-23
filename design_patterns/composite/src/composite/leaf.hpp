/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_LEAF_HPP
#define DESIGN_PATTERNS_LEAF_HPP

#include "component.hpp"

namespace cpp_design_patterns {
namespace composite {

/**
 * @brief Leaf example.
 *
 * The leaf has no children.
 */
class Leaf : public Component {
public:
    /**
     * @brief Constructor.
     *
     * @param id Leaf ID.
     */
    explicit Leaf(const uint8_t id);

    /**
     * @copydoc Component::operation
     */
    void operation() override;

    /**
     * @copydoc Component::add
     *
     * @note Leaf has no children, so this method does nothing.
     */
    void add(std::shared_ptr<Component> child) override;

    /**
     * @copydoc Component::remove
     *
     * @note Leaf has no children, so this method does nothing.
     */
    void remove(const uint8_t child_index) override;

    /**
     * @copydoc Component::get_child
     *
     * @note Leaf has no children, so this method returns a null pointer.
     */
    std::shared_ptr<Component> get_child(const uint8_t child_index) override;

private:
    /// Leaf ID.
    uint8_t id_;
};

} // namespace composite
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_LEAF_HPP

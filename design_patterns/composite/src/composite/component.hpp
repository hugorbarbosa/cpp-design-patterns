/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_COMPONENT_HPP
#define DESIGN_PATTERNS_COMPONENT_HPP

#include <memory>

namespace cpp_design_patterns {
namespace composite {

/**
 * @brief Component interface.
 */
class Component {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Component() = default;

    /**
     * @brief Copy constructor deleted.
     */
    Component(const Component&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    Component& operator=(const Component&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    Component(Component&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    Component& operator=(Component&&) = delete;

    /**
     * @brief An example of operation.
     */
    virtual void operation() = 0;

    /**
     * @brief Adds a child.
     *
     * @param child Child to be added.
     */
    virtual void add(std::shared_ptr<Component> child) = 0;

    /**
     * @brief Removes a child.
     *
     * @param child_index Child index to be removed.
     */
    virtual void remove(const uint8_t child_index) = 0;

    /**
     * @brief Gets a child.
     *
     * @param child_index Child index to get.
     *
     * @return Child from the provided index.
     */
    virtual std::shared_ptr<Component> get_child(const uint8_t child_index) = 0;

protected:
    /**
     * @brief Constructor.
     */
    Component() = default;
};

} // namespace composite
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_COMPONENT_HPP

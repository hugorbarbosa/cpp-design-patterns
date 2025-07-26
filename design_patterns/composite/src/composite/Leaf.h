/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IComponent.h"

namespace cppDesignPatterns {
namespace composite {

/**
 * @brief Leaf example.
 *
 * The leaf has no children.
 */
class Leaf : public IComponent
{
public:
    /**
     * @brief Constructor.
     * 
     * @param id Leaf ID.
     */
    Leaf(const uint8_t id);

    /**
     * @copydoc IComponent#operation
     */
    void operation() override;

    /**
     * @copydoc IComponent#add
     *
     * @note Leaf has no children, so this method does nothing.
     */
    void add(std::shared_ptr<IComponent> child) override;

    /**
     * @copydoc IComponent#remove
     *
     * @note Leaf has no children, so this method does nothing.
     */
    void remove(const uint8_t childIndex) override;

    /**
     * @copydoc IComponent#getChild
     *
     * @note Leaf has no children, so this method returns a null pointer.
     */
    std::shared_ptr<IComponent> getChild(const uint8_t childIndex) override;

private:
    /// Leaf ID.
    const uint8_t cId;
};

} // namespace composite
} // namespace cppDesignPatterns

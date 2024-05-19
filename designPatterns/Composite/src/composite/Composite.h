/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IComponent.h"
#include <vector>

namespace cppDesignPatterns {
namespace composite {

/**
 * @brief Composite example.
 */
class Composite : public IComponent
{
public:
    /**
     * @copydoc IComponent#add
     */
    void operation() override;

    /**
     * @copydoc IComponent#add
     */
    void add(std::shared_ptr<IComponent> child) override;

    /**
     * @copydoc IComponent#remove
     */
    void remove(const uint8_t childIndex) override;

    /**
     * @copydoc IComponent#getChild
     */
    std::shared_ptr<IComponent> getChild(const uint8_t childIndex) override;

private:
    /// Container with the children.
    std::vector<std::shared_ptr<IComponent>> mChildren;
};

} // namespace composite
} // namespace cppDesignPatterns

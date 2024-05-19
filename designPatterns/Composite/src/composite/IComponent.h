/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <memory>

namespace cppDesignPatterns {
namespace composite {

/**
 * @brief Component interface.
 */
class IComponent
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IComponent() = default;

    /**
     * @brief An example of operation.
     */
    virtual void operation() = 0;

    /**
     * @brief Adds a child.
     *
     * @param child Child to be added.
     */
    virtual void add(std::shared_ptr<IComponent> child) = 0;

    /**
     * @brief Removes a child.
     *
     * @param childIndex Child index to be removed.
     */
    virtual void remove(const uint8_t childIndex) = 0;

    /**
     * @brief Gets a child.
     *
     * @param childIndex Child index to get.
     *
     * @return Child from the provided index.
     */
    virtual std::shared_ptr<IComponent> getChild(const uint8_t childIndex) = 0;
};

} // namespace composite
} // namespace cppDesignPatterns

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "ValidComponent.h"

namespace cppDesignPatterns {
namespace decorator {

/**
 * @brief Decorator example.
 *
 * This decorator uses composition to handle the decorated component.
 *
 * @note In this case, there's no base class for the decorator comparing to the dynamic decorator.
 *
 * @tparam Component Component type.
 */
template<ValidComponent Component>
class Decorator1
{
public:
    /**
     * @brief Constructor.
     *
     * @tparam Args Arguments types.
     * @param args Arguments.
     */
    template<typename... Args>
    explicit Decorator1(Args&&... args);

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation();

protected:
    /// Component.
    Component mComponent;
};

} // namespace decorator
} // namespace cppDesignPatterns

#include "Decorator1.ipp"

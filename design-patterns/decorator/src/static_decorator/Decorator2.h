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
 * This decorator uses inheritance to handle the decorated component.
 *
 * @note In this case, there's no base class for the decorator comparing to the dynamic decorator, using directly the
 * Component as base class instead of a Decorator base class.
 *
 * @tparam Component Component type.
 */
template<ValidComponent Component>
class Decorator2 : private Component
{
public:
    /**
     * @brief Constructor.
     *
     * @tparam Args Arguments types.
     * @param args Arguments.
     */
    template<typename... Args>
    explicit Decorator2(Args&&... args);

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation();
};

} // namespace decorator
} // namespace cppDesignPatterns

#include "Decorator2.ipp"

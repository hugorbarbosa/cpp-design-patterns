/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "Decorator.h"

namespace cppDesignPatterns {
namespace decorator {

/**
 * @brief Concrete decorator example.
 */
class ConcreteDecorator1 : public Decorator
{
public:
    /**
     * @brief Constructor.
     *
     * @param component Component.
     */
    explicit ConcreteDecorator1(std::unique_ptr<IComponent> component);

    /**
     * @copydoc Decorator#operation
     */
    std::string operation() override;
};

} // namespace decorator
} // namespace cppDesignPatterns

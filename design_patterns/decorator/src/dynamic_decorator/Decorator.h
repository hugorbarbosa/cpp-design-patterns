/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IComponent.h"
#include <memory>

namespace cppDesignPatterns {
namespace decorator {

/**
 * @brief Decorator.
 */
class Decorator : public IComponent
{
public:
    /**
     * @brief Constructor.
     *
     * @param component Component.
     */
    explicit Decorator(std::unique_ptr<IComponent> component);

    /**
     * @brief Destructor.
     */
    virtual ~Decorator() = default;

    /**
     * @copydoc IComponent#operation
     */
    std::string operation() override;

protected:
    /// Component.
    std::unique_ptr<IComponent> mComponent;
};

} // namespace decorator
} // namespace cppDesignPatterns

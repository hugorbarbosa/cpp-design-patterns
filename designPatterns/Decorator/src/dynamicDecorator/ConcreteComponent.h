/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IComponent.h"

namespace cppDesignPatterns {
namespace decorator {

/**
 * @brief Concrete component example.
 */
class ConcreteComponent : public IComponent
{
public:
    /**
     * @copydoc IComponent#operation
     */
    std::string operation() override;
};

} // namespace decorator
} // namespace cppDesignPatterns

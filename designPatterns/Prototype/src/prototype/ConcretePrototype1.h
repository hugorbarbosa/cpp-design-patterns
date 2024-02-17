/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IPrototype.h"

namespace cppDesignPatterns {
namespace prototype {

/**
 * @brief Concrete prototype 1.
 */
class ConcretePrototype1 : public IPrototype
{
public:
    /**
     * @brief Constructor.
     *
     * @param data Prototype data.
     */
    ConcretePrototype1(std::string data);

    /**
     * @copydoc IPrototype#clone
     */
    std::unique_ptr<IPrototype> clone() const override;

    /**
     * @copydoc IPrototype#getInfo
     */
    std::string getData() const noexcept override;

private:
    /// Prototype data.
    std::string mData;
};

} // namespace prototype
} // namespace cppDesignPatterns

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "IImplementor.h"
#include <memory>
#include <string>

namespace cppDesignPatterns {
namespace bridge {

/**
 * @brief Abstraction interface, used by the clients.
 */
class Abstraction
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~Abstraction() = default;

    /**
     * @brief An example of operation.
     *
     * @return Result information.
     */
    virtual std::string operation() = 0;

protected:
    /**
     * @brief Constructor.
     *
     * The constructor is protected to ensure that only derived classes are able to specify the concrete implementor.
     *
     * @param implementor Implementor.
     */
    explicit Abstraction(std::unique_ptr<IImplementor> implementor)
        : mPimpl{std::move(implementor)}
    {
    }

    /**
     * @brief Gets the implementor.
     *
     * @return Implementor.
     */
    IImplementor* getImplementor()
    {
        return mPimpl.get();
    }

    /**
     * @brief Gets the implementor.
     *
     * @return Implementor.
     */
    const IImplementor* getImplementor() const
    {
        return mPimpl.get();
    }

private:
    /// Pointer-to-implementation (pimpl).
    std::unique_ptr<IImplementor> mPimpl;
};

} // namespace bridge
} // namespace cppDesignPatterns

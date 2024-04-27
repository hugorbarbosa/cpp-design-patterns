/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <Adaptee.h>
#include <ITarget.h>
#include <memory>

namespace cppDesignPatterns {
namespace adapter {

/**
 * @brief Object adapter.
 */
class ObjectAdapter : public ITarget
{
public:
    /**
     * @brief Constructor.
     *
     * @param adaptee Adaptee with incompatible interface.
     */
    explicit ObjectAdapter(std::unique_ptr<Adaptee> adaptee);

    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operation() override;

private:
    /// Adaptee with incompatible interface.
    std::unique_ptr<Adaptee> mAdaptee;
};

} // namespace adapter
} // namespace cppDesignPatterns

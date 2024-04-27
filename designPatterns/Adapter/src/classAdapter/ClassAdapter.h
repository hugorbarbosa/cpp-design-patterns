/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <Adaptee.h>
#include <ITarget.h>

namespace cppDesignPatterns {
namespace adapter {

/**
 * @brief Class adapter.
 */
class ClassAdapter
    : public ITarget
    , private Adaptee
{
public:
    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operation() override;
};

} // namespace adapter
} // namespace cppDesignPatterns

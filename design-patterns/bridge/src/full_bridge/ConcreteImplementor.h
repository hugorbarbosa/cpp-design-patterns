/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <IImplementor.h>

namespace cppDesignPatterns {
namespace bridge {

/**
 * @brief Concrete implementor.
 */
class ConcreteImplementor : public IImplementor
{
public:
    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operationImpl() override;
};

} // namespace bridge
} // namespace cppDesignPatterns

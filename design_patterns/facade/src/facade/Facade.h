/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include "SubsystemA.h"
#include "SubsystemB.h"

namespace cppDesignPatterns {
namespace facade {

/**
 * @brief Facade.
 *
 * The Facade hides the complexities of the subsystems and provides a simpler interface to the client.
 */
class Facade
{
public:
    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation1();

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation2();

private:
    /// Subsystem A.
    SubsystemA mSubsystemA;
    /// Subsystem B.
    SubsystemB mSubsystemB;
};

} // namespace facade
} // namespace cppDesignPatterns

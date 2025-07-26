/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#pragma once

namespace cppDesignPatterns {
namespace strategy {
namespace dynamicBase {

/**
 * @brief Strategy interface.
 */
class IStrategy
{
public:
    /**
     * @brief Destructor.
     */
    virtual ~IStrategy() = default;

    /**
     * @brief Execute algorithm.
     */
    virtual void execute() noexcept = 0;
};

} // namespace dynamicBase
} // namespace strategy
} // namespace cppDesignPatterns

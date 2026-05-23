/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_TARGET_HPP
#define DESIGN_PATTERNS_TARGET_HPP

#include <string>

namespace cpp_design_patterns {
namespace adapter {

/**
 * @brief Target interface, used by the clients.
 */
class Target {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Target() = default;

    /**
     * @brief Copy constructor deleted.
     */
    Target(const Target&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    Target& operator=(const Target&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    Target(Target&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    Target& operator=(Target&&) = delete;

    /**
     * @brief An example of operation.
     *
     * @return Result information.
     */
    virtual std::string operation() = 0;

protected:
    /**
     * @brief Constructor.
     */
    Target() = default;
};

} // namespace adapter
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_TARGET_HPP

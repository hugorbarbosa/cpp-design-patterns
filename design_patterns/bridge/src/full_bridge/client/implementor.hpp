/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_IMPLEMENTOR_HPP
#define DESIGN_PATTERNS_IMPLEMENTOR_HPP

#include <string>

namespace cpp_design_patterns {
namespace bridge {

/**
 * @brief Implementor interface.
 */
class Implementor {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Implementor() = default;

    /**
     * @brief Copy constructor deleted.
     */
    Implementor(const Implementor&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    Implementor& operator=(const Implementor&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    Implementor(Implementor&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    Implementor& operator=(Implementor&&) = delete;

    /**
     * @brief An example of operation.
     *
     * @return Result information.
     */
    virtual std::string operation_impl() = 0;

protected:
    /**
     * @brief Constructor.
     */
    Implementor() = default;
};

} // namespace bridge
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_IMPLEMENTOR_HPP

/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_COMPONENT_BASE_HPP
#define DESIGN_PATTERNS_COMPONENT_BASE_HPP

#include <string>

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Component interface.
 */
class ComponentBase {
public:
    /**
     * @brief Destructor.
     */
    virtual ~ComponentBase() = default;

    /**
     * @brief Copy constructor deleted.
     */
    ComponentBase(const ComponentBase&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    ComponentBase& operator=(const ComponentBase&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    ComponentBase(ComponentBase&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    ComponentBase& operator=(ComponentBase&&) = delete;

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    virtual std::string operation() = 0;

protected:
    /**
     * @brief Constructor.
     */
    ComponentBase() = default;
};

} // namespace decorator
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_COMPONENT_BASE_HPP

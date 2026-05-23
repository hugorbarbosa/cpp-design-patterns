/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_COMPONENT_HPP
#define DESIGN_PATTERNS_COMPONENT_HPP

#include <string>

namespace cpp_design_patterns {
namespace decorator {

/**
 * @brief Component example.
 *
 * @note In this case, there's no base class for the component comparing to the dynamic decorator.
 */
class Component {
public:
    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    static std::string operation();
};

} // namespace decorator
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_COMPONENT_HPP

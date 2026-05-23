/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_ADAPTEE_HPP
#define DESIGN_PATTERNS_ADAPTEE_HPP

#include <string>

namespace cpp_design_patterns {
namespace adapter {

/**
 * @brief Adaptee that represents an existing entity with incompatible interface that needs to be
 * adapted into another interface clients expect.
 */
class Adaptee {
public:
    /**
     * @brief Specific operation.
     *
     * @return Result information.
     */
    static std::string specific_operation();
};

} // namespace adapter
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_ADAPTEE_HPP

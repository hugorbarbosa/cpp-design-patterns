/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_FACADE_HPP
#define DESIGN_PATTERNS_FACADE_HPP

#include "subsystem_a.hpp"
#include "subsystem_b.hpp"

namespace cpp_design_patterns {
namespace facade {

/**
 * @brief Facade.
 *
 * The Facade hides the complexities of the subsystems and provides a simpler interface to the
 * client.
 */
class Facade {
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
    SubsystemA subsystem_a_;
    /// Subsystem B.
    SubsystemB subsystem_b_;
};

} // namespace facade
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_FACADE_HPP

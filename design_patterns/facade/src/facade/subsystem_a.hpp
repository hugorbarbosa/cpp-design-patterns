/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_SUBSYSTEM_A_HPP
#define DESIGN_PATTERNS_SUBSYSTEM_A_HPP

#include <string>

namespace cpp_design_patterns {
namespace facade {

/**
 * @brief Subsystem A.
 *
 * This exemplifies a complex subsystem.
 */
class SubsystemA {
public:
    /**
     * @brief Constructor.
     *
     * @param data Data.
     */
    explicit SubsystemA(std::string data = "Dummy data") noexcept;

    /**
     * @brief An example of operation.
     *
     * @return Operation result.
     */
    std::string operation();

private:
    /// Data.
    std::string data_;
};

} // namespace facade
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_SUBSYSTEM_A_HPP

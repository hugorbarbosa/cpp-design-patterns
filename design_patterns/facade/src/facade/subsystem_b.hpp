/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_SUBSYSTEM_B_HPP
#define DESIGN_PATTERNS_SUBSYSTEM_B_HPP

#include <string>

namespace cpp_design_patterns {
namespace facade {

/**
 * @brief Subsystem B.
 *
 * This exemplifies a complex subsystem.
 */
class SubsystemB {
public:
    /**
     * @brief Constructor.
     *
     * @param data Data.
     */
    explicit SubsystemB(std::string data = "Dummy data") noexcept;

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

#endif // DESIGN_PATTERNS_SUBSYSTEM_B_HPP

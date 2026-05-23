/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_CLASS_ADAPTER_HPP
#define DESIGN_PATTERNS_CLASS_ADAPTER_HPP

#include <adaptee.hpp>
#include <target.hpp>

namespace cpp_design_patterns {
namespace adapter {

/**
 * @brief Class adapter.
 */
class ClassAdapter
    : public Target
    , private Adaptee {
public:
    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operation() override;
};

} // namespace adapter
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CLASS_ADAPTER_HPP

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_OBJECT_ADAPTER_HPP
#define DESIGN_PATTERNS_OBJECT_ADAPTER_HPP

#include <adaptee.hpp>
#include <memory>
#include <target.hpp>

namespace cpp_design_patterns {
namespace adapter {

/**
 * @brief Object adapter.
 */
class ObjectAdapter : public Target {
public:
    /**
     * @brief Constructor.
     *
     * @param adaptee Adaptee with incompatible interface.
     */
    explicit ObjectAdapter(std::unique_ptr<Adaptee> adaptee);

    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operation() override;

private:
    /// Adaptee with incompatible interface.
    std::unique_ptr<Adaptee> adaptee_;
};

} // namespace adapter
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_OBJECT_ADAPTER_HPP

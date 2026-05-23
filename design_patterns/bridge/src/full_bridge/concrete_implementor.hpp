/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_IMPLEMENTOR_HPP
#define DESIGN_PATTERNS_CONCRETE_IMPLEMENTOR_HPP

#include <implementor.hpp>

namespace cpp_design_patterns {
namespace bridge {

/**
 * @brief Concrete implementor.
 */
class ConcreteImplementor : public Implementor {
public:
    /**
     * @brief Operation.
     *
     * @return Result information.
     */
    std::string operation_impl() override;
};

} // namespace bridge
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_IMPLEMENTOR_HPP

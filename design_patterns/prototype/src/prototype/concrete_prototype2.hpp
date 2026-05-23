/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_CONCRETE_PROTOTYPE2_HPP
#define DESIGN_PATTERNS_CONCRETE_PROTOTYPE2_HPP

#include "prototype.hpp"

namespace cpp_design_patterns {
namespace prototype {

/**
 * @brief Concrete prototype 2.
 */
class ConcretePrototype2 : public Prototype {
public:
    /**
     * @brief Constructor.
     *
     * @param data Prototype data.
     */
    explicit ConcretePrototype2(std::string data);

    /**
     * @copydoc Prototype::clone
     */
    std::unique_ptr<Prototype> clone() const override;

    /**
     * @copydoc Prototype::get_data
     */
    std::string get_data() const noexcept override;

private:
    /// Prototype data.
    std::string data_;
};

} // namespace prototype
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_CONCRETE_PROTOTYPE2_HPP

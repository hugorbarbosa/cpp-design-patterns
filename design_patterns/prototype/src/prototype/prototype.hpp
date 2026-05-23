/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_PROTOTYPE_HPP
#define DESIGN_PATTERNS_PROTOTYPE_HPP

#include <memory>
#include <string>

namespace cpp_design_patterns {
namespace prototype {

/**
 * @brief Prototype interface.
 */
class Prototype {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Prototype() = default;

    /**
     * @brief Move copy constructor deleted.
     */
    Prototype(Prototype&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     *
     * @return This instance.
     */
    Prototype& operator=(Prototype&&) = delete;

    /**
     * @brief Clone the prototype.
     *
     * @return Cloned prototype.
     */
    virtual std::unique_ptr<Prototype> clone() const = 0;

    /**
     * @brief Get the prototype data.
     *
     * @return Prototype data.
     */
    virtual std::string get_data() const noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    Prototype() = default;

    /**
     * @brief Copy constructor.
     */
    Prototype(const Prototype&) = default;

    /**
     * @brief Assignment operator.
     *
     * @return This instance.
     */
    Prototype& operator=(const Prototype&) = default;
};

} // namespace prototype
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_PROTOTYPE_HPP

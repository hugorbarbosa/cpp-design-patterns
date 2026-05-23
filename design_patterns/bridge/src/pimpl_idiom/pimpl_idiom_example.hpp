/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#ifndef DESIGN_PATTERNS_PIMPL_IDIOM_EXAMPLE_HPP
#define DESIGN_PATTERNS_PIMPL_IDIOM_EXAMPLE_HPP

#include <cstdint>
#include <memory>
#include <string>

namespace cpp_design_patterns {
namespace bridge {

/**
 * @brief Usage example of the Pimpl idiom.
 */
class PimplIdiomExample {
public:
    /**
     * @brief Constructor.
     */
    PimplIdiomExample();

    /**
     * @brief Destructor.
     *
     * This destructor must be defined otherwise the compiler will generate a default one in this
     * header file. It would trigger the destruction of the mPimpl, which would require the
     * definition of the Impl class in the header file. Because of this, this destructor must be
     * defined in the source file instead of in this header file, otherwise an error is emitted
     * about the incomplete type Impl.
     */
    ~PimplIdiomExample();

    /**
     * @brief Copy constructor.
     *
     * This is needed since an unique pointer cannot be copied.
     *
     * @param other Other object.
     */
    PimplIdiomExample(const PimplIdiomExample& other);

    /**
     * @brief Copy assignment operator.
     *
     * This is needed since an unique pointer cannot be copied.
     *
     * @param other Other object.
     *
     * @return This instance.
     */
    PimplIdiomExample& operator=(const PimplIdiomExample& other);

    /**
     * @brief Move constructor.
     *
     * @param other Other object.
     */
    PimplIdiomExample(PimplIdiomExample&& other) noexcept;

    /**
     * @brief Move assignment operator.
     *
     * @param other Other object.
     *
     * @return This instance.
     */
    PimplIdiomExample& operator=(PimplIdiomExample&& other) noexcept;

    /**
     * @brief Get string member value.
     *
     * @return String member value.
     */
    std::string get_string_value() const noexcept;

    /**
     * @brief Get numeric member value.
     *
     * @return Numeric member value.
     */
    uint8_t get_numeric_value() const noexcept;

private:
    // Forward declaration. Not defined here so that it can be hided.
    struct Impl;

    /// Pointer-to-implementation (pimpl).
    std::unique_ptr<Impl> pimpl_;
};

} // namespace bridge
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_PIMPL_IDIOM_EXAMPLE_HPP

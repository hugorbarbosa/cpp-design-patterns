/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <cstdint>
#include <memory>
#include <string>

namespace cppDesignPatterns {
namespace bridge {

/**
 * @brief Usage example of the Pimpl idiom.
 */
class PimplIdiomExample
{
public:
    /**
     * @brief Constructor.
     */
    PimplIdiomExample();

    /**
     * @brief Destructor.
     *
     * This destructor must be defined otherwise the compiler will generate a default one in this header file. It would
     * trigger the destruction of the mPimpl, which would require the definition of the Impl class in the header file.
     * Because of this, this destructor must be defined in the source file instead of in this header file, otherwise an
     * error is emitted about the incomplete type Impl.
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
     */
    PimplIdiomExample& operator=(const PimplIdiomExample& other);

    /**
     * @brief Move constructor.
     *
     * @param other Other object.
     */
    PimplIdiomExample(PimplIdiomExample&& other);

    /**
     * @brief Move assignment operator.
     *
     * @param other Other object.
     */
    PimplIdiomExample& operator=(PimplIdiomExample&& other);

    /**
     * @brief Get string member value.
     *
     * @return String member value.
     */
    std::string getStringValue() const noexcept;

    /**
     * @brief Get numeric member value.
     *
     * @return Numeric member value.
     */
    uint8_t getNumericValue() const noexcept;

private:
    // Forward declaration. Not defined here so that it can be hided.
    struct Impl;

    /// Pointer-to-implementation (pimpl).
    std::unique_ptr<Impl> mPimpl;
};

} // namespace bridge
} // namespace cppDesignPatterns

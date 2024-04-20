/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#pragma once

#include <string>

namespace cppDesignPatterns {
namespace singleton {

/**
 * @brief Entity used as a singleton.
 *
 * @note The structure of this singleton follows the Meyers' Singleton.
 */
class Singleton final
{
public:
    /**
     * @brief Get the singleton instance.
     *
     * This is the access point to the single instance of the singleton.
     *
     * @return Singleton instance.
     */
    static Singleton& instance();

    /**
     * @brief Set data.
     *
     * @param data Data.
     */
    void setData(std::string data) noexcept;

    /**
     * @brief Get data.
     *
     * @return Data.
     */
    std::string getData() const noexcept;

private:
    /**
     * @brief Constructor.
     *
     * @note The constructor must be explicitly defined and not defaulted ("= default"). Up to C++17, if it was
     * defaulted, it would be possible to create another instance with an empty set of braces, via value initialization,
     * as shown in the following examples:
     * - With "Singleton s;": it would not compile, because it uses default initialization.
     * - With "Singleton s{};": it would compile, since Singleton counts as an aggregate type, value initialization
     * results in aggregate initialization.
     * @note The behavior mentioned in the previous note has changed in C++20 (declaration of any constructor is enough
     * to make a type nonaggregate in C++20).
     */
    Singleton() {}

    /**
     * @brief Copy constructor deleted.
     */
    Singleton(const Singleton&) = delete;
    /**
     * @brief Assignment operator deleted.
     */
    Singleton& operator=(const Singleton&) = delete;
    /**
     * @brief Move copy constructor deleted.
     */
    Singleton(Singleton&&) = delete;
    /**
     * @brief Move assignment operator deleted.
     */
    Singleton& operator=(Singleton&&) = delete;

    /// Singleton data.
    std::string mData{};
};

} // namespace singleton
} // namespace cppDesignPatterns

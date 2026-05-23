/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_SINGLETON_HPP
#define DESIGN_PATTERNS_SINGLETON_HPP

#include <string>

namespace cpp_design_patterns {
namespace singleton {

/**
 * @brief Entity used as a singleton.
 *
 * @note The structure of this singleton follows the Meyers' Singleton.
 */
class Singleton final {
public:
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

    /**
     * @brief Destructor.
     */
    ~Singleton() = default;

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
    void set_data(std::string data) noexcept;

    /**
     * @brief Get data.
     *
     * @return Data.
     */
    std::string get_data() const noexcept;

private:
    /**
     * @brief Constructor.
     *
     * @note The constructor must be explicitly defined and not defaulted ("= default"). Up to
     * C++17, if it was defaulted, it would be possible to create another instance with an empty set
     * of braces, via value initialization, as shown in the following examples:
     * - With "Singleton s;": it would not compile, because it uses default initialization.
     * - With "Singleton s{};": it would compile, since Singleton counts as an aggregate type, value
     * initialization results in aggregate initialization.
     * @note The behavior mentioned in the previous note has changed in C++20 (declaration of any
     * constructor is enough to make a type non-aggregate in C++20).
     */
    Singleton() = default;

    /// Singleton data.
    std::string data_;
};

} // namespace singleton
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_SINGLETON_HPP

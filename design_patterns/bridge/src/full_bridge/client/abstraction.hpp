/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_ABSTRACTION_HPP
#define DESIGN_PATTERNS_ABSTRACTION_HPP

#include <memory>
#include <string>
#include "implementor.hpp"

namespace cpp_design_patterns {
namespace bridge {

/**
 * @brief Abstraction interface, used by the clients.
 */
class Abstraction {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Abstraction() = default;

    /**
     * @brief Copy constructor deleted.
     */
    Abstraction(const Abstraction&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    Abstraction& operator=(const Abstraction&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    Abstraction(Abstraction&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    Abstraction& operator=(Abstraction&&) = delete;

    /**
     * @brief An example of operation.
     *
     * @return Result information.
     */
    virtual std::string operation() = 0;

protected:
    /**
     * @brief Constructor.
     *
     * The constructor is protected to ensure that only derived classes are able to specify the
     * concrete implementor.
     *
     * @param implementor Implementor.
     */
    explicit Abstraction(std::unique_ptr<Implementor> implementor)
        : pimpl_{std::move(implementor)}
    {
    }

    /**
     * @brief Gets the implementor.
     *
     * @return Implementor.
     */
    Implementor* get_implementor()
    {
        return pimpl_.get();
    }

    /**
     * @brief Gets the implementor.
     *
     * @return Implementor.
     */
    const Implementor* get_implementor() const
    {
        return pimpl_.get();
    }

private:
    /// Pointer-to-implementation (pimpl).
    std::unique_ptr<Implementor> pimpl_;
};

} // namespace bridge
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_ABSTRACTION_HPP

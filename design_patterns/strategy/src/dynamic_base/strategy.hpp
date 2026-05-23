/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#ifndef DESIGN_PATTERNS_STRATEGY_HPP
#define DESIGN_PATTERNS_STRATEGY_HPP

namespace cpp_design_patterns {
namespace strategy {
namespace dynamic_base {

/**
 * @brief Strategy interface.
 */
class Strategy {
public:
    /**
     * @brief Destructor.
     */
    virtual ~Strategy() = default;

    /**
     * @brief Copy constructor deleted.
     */
    Strategy(const Strategy&) = delete;

    /**
     * @brief Assignment operator deleted.
     */
    Strategy& operator=(const Strategy&) = delete;

    /**
     * @brief Move copy constructor deleted.
     */
    Strategy(Strategy&&) = delete;

    /**
     * @brief Move assignment operator deleted.
     */
    Strategy& operator=(Strategy&&) = delete;

    /**
     * @brief Execute algorithm.
     */
    virtual void execute() noexcept = 0;

protected:
    /**
     * @brief Constructor.
     */
    Strategy() = default;
};

} // namespace dynamic_base
} // namespace strategy
} // namespace cpp_design_patterns

#endif // DESIGN_PATTERNS_STRATEGY_HPP

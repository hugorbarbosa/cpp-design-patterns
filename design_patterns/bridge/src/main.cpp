/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <concrete_implementor.hpp>
#include <iostream>
#include <pimpl_idiom_example.hpp>
#include <refined_abstraction.hpp>

/**
 * @brief Example of a full bridge.
 */
void full_bridge()
{
    std::cout << "== Full bridge ====\n";

    using cpp_design_patterns::bridge::Abstraction;
    using cpp_design_patterns::bridge::RefinedAbstraction;

    // Note that the client code does not know the concrete implementor or refined abstraction.
    const auto client_code = [](std::unique_ptr<Abstraction> abstraction) {
        std::cout << "Operation from abstraction: " << abstraction->operation() << "\n";
    };

    client_code(std::make_unique<RefinedAbstraction>());
}

/**
 * @brief Example of Pimpl idiom.
 */
void pimpl_idiom()
{
    std::cout << "== Pimpl idiom ====\n";

    using cpp_design_patterns::bridge::PimplIdiomExample;

    // Note that the client code does not know the implementation details.
    const auto client_code = [](const PimplIdiomExample& abstraction) {
        std::cout << "Get string from abstraction: " << abstraction.get_string_value() << "\n";
        std::cout << "Get numeric value from abstraction: "
                  << std::to_string(abstraction.get_numeric_value()) << "\n";
    };

    const PimplIdiomExample abstraction{};
    client_code(abstraction);
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    full_bridge();
    pimpl_idiom();

    return EXIT_SUCCESS;
}

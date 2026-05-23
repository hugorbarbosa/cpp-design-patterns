/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include <concrete_creator_a.hpp>
#include <concrete_creator_b.hpp>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Factory Method ====\n";

    using cpp_design_patterns::factory_method::ConcreteCreatorA;
    using cpp_design_patterns::factory_method::ConcreteCreatorB;
    using cpp_design_patterns::factory_method::Creator;

    // Note that the client code does not know the concrete products.

    // Helper function to create the product and print its information.
    auto create_product = [](const Creator& creator) {
        const auto product = creator.create_product();
        std::cout << "Product info: " << product->get_info() << "\n";
    };

    // Create product A.
    const ConcreteCreatorA concrete_creator_a;
    create_product(concrete_creator_a);

    // Create product B.
    const ConcreteCreatorB concrete_creator_b;
    create_product(concrete_creator_b);

    return EXIT_SUCCESS;
}

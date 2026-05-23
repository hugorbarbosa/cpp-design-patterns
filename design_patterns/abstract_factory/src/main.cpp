/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <concrete_factory1.hpp>
#include <concrete_factory2.hpp>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Abstract Factory ====\n";

    using cpp_design_patterns::abstract_factory::AbstractFactory;
    using cpp_design_patterns::abstract_factory::ConcreteFactory1;
    using cpp_design_patterns::abstract_factory::ConcreteFactory2;

    // Note that the client code does not know the concrete products.

    // Helper function to create the product and print its information.
    const auto create_products = [](const AbstractFactory& factory) {
        const auto product_a = factory.create_product_a();
        std::cout << "Product A info: " << product_a->get_info() << "\n";

        const auto product_b = factory.create_product_b();
        std::cout << "Product B info: " << product_b->get_info() << "\n";
    };

    // Factory 1.
    std::cout << "Using factory 1\n";
    const ConcreteFactory1 concrete_factory1;
    create_products(concrete_factory1);

    // Factory 2.
    std::cout << "Using factory 2\n";
    const ConcreteFactory2 concrete_factory2;
    create_products(concrete_factory2);

    return EXIT_SUCCESS;
}

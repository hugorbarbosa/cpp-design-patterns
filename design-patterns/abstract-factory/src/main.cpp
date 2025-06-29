/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <ConcreteFactory1.h>
#include <ConcreteFactory2.h>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Abstract Factory ====" << std::endl;

    using namespace cppDesignPatterns::abstractFactory;

    // Note that the client code does not know the concrete products.

    // Helper function to create the product and print its information.
    auto createProducts = [](const IAbstractFactory& factory) {
        const auto productA = factory.createProductA();
        std::cout << "Product A info: " << productA->getInfo() << std::endl;

        const auto productB = factory.createProductB();
        std::cout << "Product B info: " << productB->getInfo() << std::endl;
    };

    // Factory 1.
    std::cout << "Using factory 1" << std::endl;
    ConcreteFactory1 concreteFactory1;
    createProducts(concreteFactory1);

    // Factory 2.
    std::cout << "Using factory 2" << std::endl;
    ConcreteFactory2 concreteFactory2;
    createProducts(concreteFactory2);

    return EXIT_SUCCESS;
}

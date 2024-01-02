/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include <ConcreteCreatorA.h>
#include <ConcreteCreatorB.h>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Factory Method ====" << std::endl;

    using namespace cppDesignPatterns::factoryMethod;

    // Note that the client code does not know the concrete products.

    // Helper function to create the product and print its information.
    auto createProduct = [](const ICreator& creator) {
        const auto product = creator.createProduct();
        std::cout << "Product info: " << product->getInfo() << std::endl;
    };

    // Create product A.
    ConcreteCreatorA concreteCreatorA;
    createProduct(concreteCreatorA);

    // Create product B.
    ConcreteCreatorB concreteCreatorB;
    createProduct(concreteCreatorB);

    return EXIT_SUCCESS;
}

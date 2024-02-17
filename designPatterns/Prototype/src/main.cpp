/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <ConcretePrototype1.h>
#include <ConcretePrototype2.h>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Prototype ====" << std::endl;

    using namespace cppDesignPatterns::prototype;

    // Helper function to clone the prototype and print its data.
    const auto clonePrototype = [](const std::unique_ptr<IPrototype>& prototype) {
        const auto clonedPrototype = prototype->clone();
        std::cout << "Cloned prototype data: " << clonedPrototype->getData() << std::endl;
    };

    // Prototype 1.
    std::unique_ptr<IPrototype> prototype1{std::make_unique<ConcretePrototype1>("Prototype data 1")};
    clonePrototype(prototype1);

    // Prototype 2.
    std::unique_ptr<IPrototype> prototype2{std::make_unique<ConcretePrototype2>("Prototype data 2")};
    clonePrototype(prototype2);

    return EXIT_SUCCESS;
}

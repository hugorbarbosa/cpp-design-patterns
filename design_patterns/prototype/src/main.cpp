/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include <concrete_prototype1.hpp>
#include <concrete_prototype2.hpp>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Prototype ====\n";

    using cpp_design_patterns::prototype::ConcretePrototype1;
    using cpp_design_patterns::prototype::ConcretePrototype2;
    using cpp_design_patterns::prototype::Prototype;

    // Helper function to clone the prototype and print its data.
    const auto clone_prototype = [](const std::unique_ptr<Prototype>& prototype) {
        const auto cloned_prototype = prototype->clone();
        std::cout << "Cloned prototype data: " << cloned_prototype->get_data() << "\n";
    };

    // Prototype 1.
    const std::unique_ptr<Prototype> prototype1{
        std::make_unique<ConcretePrototype1>("Prototype data 1")};
    clone_prototype(prototype1);

    // Prototype 2.
    const std::unique_ptr<Prototype> prototype2{
        std::make_unique<ConcretePrototype2>("Prototype data 2")};
    clone_prototype(prototype2);

    return EXIT_SUCCESS;
}

/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include <facade.hpp>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Facade ====\n";

    // Note that the client code only knows the Facade object (subsystems are encapsulated in the
    // Facade).
    cpp_design_patterns::facade::Facade facade;
    std::cout << "Operation 1 from Facade: " << facade.operation1() << "\n";
    std::cout << "Operation 2 from Facade: " << facade.operation2() << "\n";

    return EXIT_SUCCESS;
}

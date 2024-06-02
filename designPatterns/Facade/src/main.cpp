/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <Facade.h>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Facade ====" << std::endl;

    using namespace cppDesignPatterns::facade;

    // Note that the client code only knows the Facade object (subsystems are encapsulated in the Facade).
    Facade facade{};
    std::cout << "Operation 1 from Facade: " << facade.operation1() << std::endl;
    std::cout << "Operation 2 from Facade: " << facade.operation2() << std::endl;

    return EXIT_SUCCESS;
}

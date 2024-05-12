/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <ConcreteImplementor.h>
#include <iostream>
#include <PimplIdiomExample.h>
#include <RefinedAbstraction.h>

/**
 * @brief Example of a full bridge.
 */
void fullBridge()
{
    std::cout << "== Full bridge ====" << std::endl;

    using namespace cppDesignPatterns::bridge;

    // Note that the client code does not know the concrete implementor or refined abstraction.
    const auto clientCode = [](std::unique_ptr<Abstraction> abstraction) {
        std::cout << "Operation from abstraction: " << abstraction->operation() << std::endl;
    };

    clientCode(std::make_unique<RefinedAbstraction>());
}

/**
 * @brief Example of Pimpl idiom.
 */
void pimplIdiom()
{
    std::cout << "== Pimpl idiom ====" << std::endl;

    using namespace cppDesignPatterns::bridge;

    // Note that the client code does not know the implementation details.
    const auto clientCode = [](const PimplIdiomExample& abstraction) {
        std::cout << "Get string from abstraction: " << abstraction.getStringValue() << std::endl;
        std::cout << "Get numeric value from abstraction: " << std::to_string(abstraction.getNumericValue())
                  << std::endl;
    };

    PimplIdiomExample abstraction{};
    clientCode(abstraction);
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    fullBridge();
    pimplIdiom();

    return EXIT_SUCCESS;
}

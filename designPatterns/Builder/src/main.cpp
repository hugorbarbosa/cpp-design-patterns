/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include <ConcreteProductBuilder.h>
#include <Director.h>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Builder ====" << std::endl;

    using namespace cppDesignPatterns::builder;

    Director director(std::make_unique<ConcreteProductBuilder>());
    auto product = director.construct();
    std::cout << "Product info: " << product.getInfo() << std::endl;

    return EXIT_SUCCESS;
}

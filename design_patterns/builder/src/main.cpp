/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include <concrete_product_builder.hpp>
#include <director.hpp>
#include <iostream>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Builder ====\n";

    using cpp_design_patterns::builder::ConcreteProductBuilder;
    using cpp_design_patterns::builder::Director;

    Director director(std::make_unique<ConcreteProductBuilder>());
    auto product = director.construct();
    std::cout << "Product info: " << product.get_info() << "\n";

    return EXIT_SUCCESS;
}

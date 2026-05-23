/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include <adaptee.hpp>
#include <class_adapter.hpp>
#include <iostream>
#include <object_adapter.hpp>
#include <target.hpp>

using cpp_design_patterns::adapter::Target;

/**
 * @brief Example of client code.
 *
 * @note Client uses only the target interface.
 *
 * @param target Target interface.
 */
void client_code(std::unique_ptr<Target> target)
{
    std::cout << "Target operation: " << target->operation() << "\n";
}

/**
 * @brief Example of object adapter code.
 */
void object_adapter()
{
    std::cout << "== Object Adapter ====\n";

    using cpp_design_patterns::adapter::Adaptee;
    using cpp_design_patterns::adapter::ObjectAdapter;

    auto adaptee = std::make_unique<Adaptee>();
    std::unique_ptr<Target> target = std::make_unique<ObjectAdapter>(std::move(adaptee));
    client_code(std::move(target));
}

/**
 * @brief Example of class adapter code.
 */
void class_adapter()
{
    std::cout << "== Class Adapter ====\n";

    using cpp_design_patterns::adapter::ClassAdapter;

    std::unique_ptr<Target> target = std::make_unique<ClassAdapter>();
    client_code(std::move(target));
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    object_adapter();
    class_adapter();

    int* ptr = nullptr;
    int x = *ptr; // Null pointer dereference.
    (void)x;

    return EXIT_SUCCESS;
}

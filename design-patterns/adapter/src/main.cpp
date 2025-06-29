/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <Adaptee.h>
#include <ClassAdapter.h>
#include <iostream>
#include <ITarget.h>
#include <ObjectAdapter.h>

using namespace cppDesignPatterns::adapter;

/**
 * @brief Example of client code.
 *
 * @note Client uses only the target interface.
 *
 * @param target Target interface.
 */
void clientCode(std::unique_ptr<ITarget> target)
{
    std::cout << "Target operation: " << target->operation() << std::endl;
}

/**
 * @brief Example of object adapter code.
 */
void objectAdapter()
{
    std::cout << "== Object Adapter ====" << std::endl;

    auto adaptee = std::make_unique<Adaptee>();
    std::unique_ptr<ITarget> target = std::make_unique<ObjectAdapter>(std::move(adaptee));
    clientCode(std::move(target));
}

/**
 * @brief Example of class adapter code.
 */
void classAdapter()
{
    std::cout << "== Class Adapter ====" << std::endl;

    std::unique_ptr<ITarget> target = std::make_unique<ClassAdapter>();
    clientCode(std::move(target));
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    objectAdapter();
    classAdapter();

    return EXIT_SUCCESS;
}

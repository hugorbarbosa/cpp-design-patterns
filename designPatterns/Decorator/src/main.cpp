/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <Component.h>
#include <ConcreteComponent.h>
#include <ConcreteDecorator1.h>
#include <ConcreteDecorator2.h>
#include <Decorator1.h>
#include <Decorator2.h>
#include <iostream>

/**
 * @brief Example of a dynamic decorator.
 */
void dynamicDecorator()
{
    std::cout << "== Dynamic decorator ====" << std::endl;

    using namespace cppDesignPatterns::decorator;

    // Note that the client code does not know the concrete component or decorators.
    const auto clientCode = [](std::unique_ptr<IComponent> component) {
        std::cout << "Operation from component: " << component->operation() << std::endl;
    };

    // Component with only one decorator.
    std::unique_ptr<IComponent> component1{std::make_unique<ConcreteDecorator1>(std::make_unique<ConcreteComponent>())};
    clientCode(std::move(component1));
    std::unique_ptr<IComponent> component2{std::make_unique<ConcreteDecorator2>(std::make_unique<ConcreteComponent>())};
    clientCode(std::move(component2));

    // Component with multiple decorators.
    std::unique_ptr<IComponent> component{std::make_unique<ConcreteDecorator2>(
        std::make_unique<ConcreteDecorator1>(std::make_unique<ConcreteComponent>()))};
    clientCode(std::move(component));
}

/**
 * @brief Example of a static decorator.
 */
void staticDecorator()
{
    std::cout << "== Static decorator ====" << std::endl;

    using namespace cppDesignPatterns::decorator;

    // Component with only one decorator.
    Decorator1<Component> component1{};
    std::cout << "Operation from component: " << component1.operation() << std::endl;
    Decorator2<Component> component2{};
    std::cout << "Operation from component: " << component2.operation() << std::endl;

    // Component with multiple decorators.
    Decorator2<Decorator1<Component>> component{};
    std::cout << "Operation from component: " << component.operation() << std::endl;
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    dynamicDecorator();
    staticDecorator();

    return EXIT_SUCCESS;
}

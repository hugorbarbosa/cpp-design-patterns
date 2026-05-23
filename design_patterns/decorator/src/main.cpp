/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <component.hpp>
#include <concrete_component.hpp>
#include <concrete_decorator1.hpp>
#include <concrete_decorator2.hpp>
#include <decorator1.hpp>
#include <decorator2.hpp>
#include <iostream>

/**
 * @brief Example of a dynamic decorator.
 */
void dynamic_decorator()
{
    std::cout << "== Dynamic decorator ====\n";

    using cpp_design_patterns::decorator::ComponentBase;
    using cpp_design_patterns::decorator::ConcreteComponent;
    using cpp_design_patterns::decorator::ConcreteDecorator1;
    using cpp_design_patterns::decorator::ConcreteDecorator2;

    // Note that the client code does not know the concrete component or decorators.
    const auto client_code = [](std::unique_ptr<ComponentBase> component) {
        std::cout << "Operation from component: " << component->operation() << "\n";
    };

    // Component with only one decorator.
    std::unique_ptr<ComponentBase> component1{
        std::make_unique<ConcreteDecorator1>(std::make_unique<ConcreteComponent>())};
    client_code(std::move(component1));
    std::unique_ptr<ComponentBase> component2{
        std::make_unique<ConcreteDecorator2>(std::make_unique<ConcreteComponent>())};
    client_code(std::move(component2));

    // Component with multiple decorators.
    std::unique_ptr<ComponentBase> component{std::make_unique<ConcreteDecorator2>(
        std::make_unique<ConcreteDecorator1>(std::make_unique<ConcreteComponent>()))};
    client_code(std::move(component));
}

/**
 * @brief Example of a static decorator.
 */
void static_decorator()
{
    std::cout << "== Static decorator ====\n";

    using cpp_design_patterns::decorator::Component;
    using cpp_design_patterns::decorator::Decorator1;
    using cpp_design_patterns::decorator::Decorator2;

    // Component with only one decorator.
    Decorator1<Component> component1{};
    std::cout << "Operation from component: " << component1.operation() << "\n";
    Decorator2<Component> component2{};
    std::cout << "Operation from component: " << component2.operation() << "\n";

    // Component with multiple decorators.
    Decorator2<Decorator1<Component>> component{};
    std::cout << "Operation from component: " << component.operation() << "\n";
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    dynamic_decorator();
    static_decorator();

    return EXIT_SUCCESS;
}

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <cassert>
#include <composite.hpp>
#include <iostream>
#include <leaf.hpp>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Composite ====\n";

    using cpp_design_patterns::composite::Component;
    using cpp_design_patterns::composite::Composite;
    using cpp_design_patterns::composite::Leaf;

    // Note that the client code does not differentiate the objects in the component.
    const auto client_code
        = [](const std::unique_ptr<Component>& component) { component->operation(); };

    // Leafs.
    std::unique_ptr<Component> leaf1{std::make_unique<Leaf>(1)};
    std::unique_ptr<Component> leaf2{std::make_unique<Leaf>(2)};
    std::unique_ptr<Component> leaf3{std::make_unique<Leaf>(3)};

    // Composite with leafs.
    std::unique_ptr<Component> composite1{std::make_unique<Composite>()};
    composite1->add(std::move(leaf1));
    composite1->add(std::move(leaf2));

    std::cout << "- Composite with leafs\n";
    client_code(composite1);

    // Composite with a composite and a leaf.
    const std::unique_ptr<Component> composite2{std::make_unique<Composite>()};
    composite2->add(std::move(composite1));
    composite2->add(std::move(leaf3));

    std::cout << "- Composite with a composite and a leaf\n";
    client_code(composite2);

    // Remove leaf 3 from the composite.
    constexpr auto index = 1;
    const auto leaf = composite2->get_child(index);
    composite2->remove(index);

    std::cout << "- Operation from the leaf that was removed from the composite\n";
    assert(leaf != nullptr);
    leaf->operation();

    std::cout << "- Composite after removing leaf 3\n";
    client_code(composite2);

    return EXIT_SUCCESS;
}

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <cassert>
#include <Composite.h>
#include <iostream>
#include <Leaf.h>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Composite ====" << std::endl;

    using namespace cppDesignPatterns::composite;

    // Note that the client code does not differentiate the objects in the component.
    const auto clientCode = [](const std::unique_ptr<IComponent>& component) { component->operation(); };

    // Leafs.
    std::unique_ptr<IComponent> leaf1 = std::make_unique<Leaf>(1);
    std::unique_ptr<IComponent> leaf2 = std::make_unique<Leaf>(2);
    std::unique_ptr<IComponent> leaf3 = std::make_unique<Leaf>(3);

    // Composite with leafs.
    std::unique_ptr<IComponent> composite1 = std::make_unique<Composite>();
    composite1->add(std::move(leaf1));
    composite1->add(std::move(leaf2));

    std::cout << "- Composite with leafs" << std::endl;
    clientCode(composite1);

    // Composite with a composite and a leaf.
    const std::unique_ptr<IComponent> composite2 = std::make_unique<Composite>();
    composite2->add(std::move(composite1));
    composite2->add(std::move(leaf3));

    std::cout << "- Composite with a composite and a leaf" << std::endl;
    clientCode(composite2);

    // Remove leaf 3 from the composite.
    constexpr auto index = 1;
    const auto leaf = composite2->getChild(index);
    composite2->remove(index);

    std::cout << "- Operation from the leaf that was removed from the composite" << std::endl;
    assert(leaf != nullptr);
    leaf->operation();

    std::cout << "- Composite after removing leaf 3" << std::endl;
    clientCode(composite2);

    return EXIT_SUCCESS;
}

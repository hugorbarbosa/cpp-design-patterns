/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include <dynamicBase/DynamicStrategyBase.h>
#include <iostream>
#include <memory>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Dynamic strategy using a base class ====" << std::endl;
    {
        using namespace cppDesignPatterns::strategy::dynamicBase;

        std::cout << "Strategy passed in constructor" << std::endl;
        // Context using concrete strategy A
        Context contextA(std::make_unique<ConcreteStrategyA>());
        contextA.executeStrategy();
        // Context using concrete strategy B
        Context contextB(std::make_unique<ConcreteStrategyB>());
        contextB.executeStrategy();

        std::cout << "Strategy passed in a setter method" << std::endl;
        // Context
        Context context;
        context.setStrategy(std::make_unique<ConcreteStrategyA>());
        context.executeStrategy();
        context.setStrategy(std::make_unique<ConcreteStrategyB>());
        context.executeStrategy();
    }

    return EXIT_SUCCESS;
}

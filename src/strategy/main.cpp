/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include <algorithm>
#include <dynamicBase/DynamicStrategyBase.h>
#include <dynamicFunction/DynamicStrategyFunction.h>
#include <iostream>
#include <memory>
#include <staticTemplate/StaticStrategy.h>

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
        // Context using concrete strategy A
        Context context(std::make_unique<ConcreteStrategyA>());
        context.executeStrategy();
        // Context using concrete strategy B
        context.setStrategy(std::make_unique<ConcreteStrategyB>());
        context.executeStrategy();
    }

    std::cout << "== Dynamic strategy using a function object ====" << std::endl;
    {
        using namespace cppDesignPatterns::strategy::dynamicFunction;

        // Concrete strategy A implemented as a lambda function
        auto strategyA = []() { std::cout << "Executing strategy A" << std::endl; };

        std::cout << "Strategy passed in constructor" << std::endl;
        // Context using concrete strategy A
        Context contextA(strategyA);
        contextA.executeStrategy();
        // Context using concrete strategy B
        Context contextB([]() { std::cout << "Executing strategy B" << std::endl; });
        contextB.executeStrategy();

        std::cout << "Strategy passed in a setter method" << std::endl;
        // Context using concrete strategy A
        Context context(strategyA);
        context.executeStrategy();
        // Context using concrete strategy B
        context.setStrategy([]() { std::cout << "Executing strategy B" << std::endl; });
        context.executeStrategy();
    }

    std::cout << "== Static strategy ====" << std::endl;
    {
        using namespace cppDesignPatterns::strategy::staticTemplate;

        std::cout << "Strategy object not passed in constructor" << std::endl;
        // Context using concrete strategy A
        Context<ConcreteStrategyA> contextA;
        contextA.executeStrategy();
        // Context using concrete strategy B
        Context<ConcreteStrategyB> contextB;
        contextB.executeStrategy();

        std::cout << "Strategy object passed in constructor" << std::endl;
        // Context using concrete strategy A
        ConcreteStrategyA strategyA;
        Context ctxA(strategyA);
        ctxA.executeStrategy();
        // Context using concrete strategy B
        ConcreteStrategyB strategyB;
        Context ctxB(strategyB);
        ctxB.executeStrategy();
    }

    std::cout << "== STL example that uses Strategy ====" << std::endl;
    const std::vector<int> vec{1, 2, 3, 4};
    std::cout << "vec = { ";
    std::for_each(vec.cbegin(), vec.cend(), [](const int& i) { std::cout << i << " "; });
    std::cout << "}" << std::endl;

    return EXIT_SUCCESS;
}

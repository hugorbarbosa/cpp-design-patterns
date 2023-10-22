/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include <algorithm>
#include <DynamicStrategyBase.h>
#include <DynamicStrategyFunction.h>
#include <iostream>
#include <memory>
#include <StaticStrategy.h>

/**
 * @brief Example of dynamic strategy using a base class.
 */
void dynamicStrategyBase()
{
    std::cout << "== Dynamic strategy using a base class ====" << std::endl;

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

/**
 * @brief Example of dynamic strategy using a function object.
 */
void dynamicStrategyFunction()
{
    std::cout << "== Dynamic strategy using a function object ====" << std::endl;

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

/**
 * @brief Example of static strategy.
 */
void staticStrategy()
{
    std::cout << "== Static strategy ====" << std::endl;

    using namespace cppDesignPatterns::strategy::staticTemplate;

    std::cout << "Strategy object not passed in constructor (template parameter)" << std::endl;
    // Context using concrete strategy A
    Context<ConcreteStrategyA> contextA;
    contextA.executeStrategy();
    // Context using concrete strategy B
    Context<ConcreteStrategyB> contextB;
    contextB.executeStrategy();

    std::cout << "Strategy object passed in constructor (template type is deducted)" << std::endl;
    // Context using concrete strategy A
    ConcreteStrategyA strategyA;
    Context ctxA(strategyA);
    ctxA.executeStrategy();
    // Context using concrete strategy B
    ConcreteStrategyB strategyB;
    Context ctxB(strategyB);
    ctxB.executeStrategy();
}

/**
 * @brief STL example that uses Strategy.
 */
void stlStrategy()
{
    std::cout << "== STL example that uses Strategy ====" << std::endl;

    // Strategy is provided by the lambda function
    const std::vector<int> vec{1, 2, 3, 4};
    std::cout << "vec = { ";
    std::for_each(vec.cbegin(), vec.cend(), [](const auto& i) { std::cout << i << " "; });
    std::cout << "}" << std::endl;
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    dynamicStrategyBase();
    dynamicStrategyFunction();
    staticStrategy();
    stlStrategy();

    return EXIT_SUCCESS;
}

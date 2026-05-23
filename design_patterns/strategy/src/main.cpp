/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include <algorithm>
#include <iostream>
#include <memory>
#include "dynamic_base/concrete_strategy_a.hpp"
#include "dynamic_base/concrete_strategy_b.hpp"
#include "dynamic_base/context.hpp"
#include "dynamic_function/context.hpp"
#include "static_template/concrete_strategy_a.hpp"
#include "static_template/concrete_strategy_b.hpp"
#include "static_template/context.hpp"

/**
 * @brief Example of dynamic strategy using a base class.
 */
void dynamic_strategy_base()
{
    std::cout << "== Dynamic strategy using a base class ====\n";

    using cpp_design_patterns::strategy::dynamic_base::ConcreteStrategyA;
    using cpp_design_patterns::strategy::dynamic_base::ConcreteStrategyB;
    using cpp_design_patterns::strategy::dynamic_base::Context;

    std::cout << "Strategy passed in constructor\n";
    // Context using concrete strategy A
    Context context_a(std::make_unique<ConcreteStrategyA>());
    context_a.execute_strategy();
    // Context using concrete strategy B
    Context context_b(std::make_unique<ConcreteStrategyB>());
    context_b.execute_strategy();

    std::cout << "Strategy passed in a setter method\n";
    // Context using concrete strategy A
    Context context(std::make_unique<ConcreteStrategyA>());
    context.execute_strategy();
    // Context using concrete strategy B
    context.set_strategy(std::make_unique<ConcreteStrategyB>());
    context.execute_strategy();
}

/**
 * @brief Example of dynamic strategy using a function object.
 */
void dynamic_strategy_function()
{
    std::cout << "== Dynamic strategy using a function object ====\n";

    using cpp_design_patterns::strategy::dynamic_function::Context;

    // Concrete strategy A implemented as a lambda function
    auto strategy_a = []() { std::cout << "Executing strategy A\n"; };

    std::cout << "Strategy passed in constructor\n";
    // Context using concrete strategy A
    Context context_a(strategy_a);
    context_a.execute_strategy();
    // Context using concrete strategy B
    Context context_b([]() { std::cout << "Executing strategy B\n"; });
    context_b.execute_strategy();

    std::cout << "Strategy passed in a setter method\n";
    // Context using concrete strategy A
    Context context(strategy_a);
    context.execute_strategy();
    // Context using concrete strategy B
    context.set_strategy([]() { std::cout << "Executing strategy B\n"; });
    context.execute_strategy();
}

/**
 * @brief Example of static strategy.
 */
void static_strategy()
{
    std::cout << "== Static strategy ====\n";

    using cpp_design_patterns::strategy::static_template::ConcreteStrategyA;
    using cpp_design_patterns::strategy::static_template::ConcreteStrategyB;
    using cpp_design_patterns::strategy::static_template::Context;

    std::cout << "Strategy object not passed in constructor (template parameter)\n";
    // Context using concrete strategy A
    Context<ConcreteStrategyA> context_a{};
    context_a.execute_strategy();
    // Context using concrete strategy B
    Context<ConcreteStrategyB> context_b{};
    context_b.execute_strategy();

    std::cout << "Strategy object passed in constructor (template type is deducted)\n";
    // Context using concrete strategy A
    const ConcreteStrategyA strategy_a;
    Context ctx_a(strategy_a);
    ctx_a.execute_strategy();
    // Context using concrete strategy B
    const ConcreteStrategyB strategy_b;
    Context ctx_b(strategy_b);
    ctx_b.execute_strategy();
}

/**
 * @brief STL example that uses Strategy.
 */
void stl_strategy()
{
    std::cout << "== STL example that uses Strategy ====\n";

    // Strategy is provided by the lambda function
    const std::vector<int> vec{1, 2, 3, 4};
    std::cout << "vec = { ";
    std::for_each(vec.cbegin(), vec.cend(), [](const auto& elem) { std::cout << elem << " "; });
    std::cout << "}\n";
}

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    dynamic_strategy_base();
    dynamic_strategy_function();
    static_strategy();
    stl_strategy();

    return EXIT_SUCCESS;
}

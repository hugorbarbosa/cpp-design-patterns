/**
 * @file
 * @copyright Copyright (C) 2023 Hugo Barbosa.
 */

#include "concrete_product_builder.hpp"
#include <thread>

namespace cpp_design_patterns {
namespace builder {

int shared_data = 0;

void increment()
{
    for (int i = 0; i < 1000; ++i) {
        shared_data++; // Data race.
    }
}

void ConcreteProductBuilder::build_part_a() noexcept
{
    product_.set_part_a("Part A");
    std::thread t1{increment};
    std::thread t2{increment};
    t1.join();
    t2.join();
}

void ConcreteProductBuilder::build_part_b() noexcept
{
    product_.set_part_b("Part B");
}

Product ConcreteProductBuilder::get_result() const noexcept
{
    return product_;
}

} // namespace builder
} // namespace cpp_design_patterns

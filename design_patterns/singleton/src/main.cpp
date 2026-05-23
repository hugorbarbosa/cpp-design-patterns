/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include <cassert>
#include <iostream>
#include <singleton.hpp>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Singleton ====\n";

    using cpp_design_patterns::singleton::Singleton;

    // First access: the instance is created.
    auto& inst1 = Singleton::instance();

    // Set data.
    const std::string data{"Dummy data"};
    inst1.set_data(data);
    std::cout << "Singleton instance 1 data: " << inst1.get_data() << "\n";

    // Second access: a reference of the instance previously created is returned.
    auto& inst2 = Singleton::instance();

    // Get data.
    std::cout << "Singleton instance 2 data: " << inst2.get_data() << "\n";

    // Assert that only one instance is created.
    assert(&inst1 == &inst2);

    return EXIT_SUCCESS;
}

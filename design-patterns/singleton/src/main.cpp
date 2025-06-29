/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include <cassert>
#include <iostream>
#include <Singleton.h>

/**
 * @brief Main function.
 *
 * @return Program exit code.
 */
int main()
{
    std::cout << "== Singleton ====" << std::endl;

    using namespace cppDesignPatterns::singleton;

    // First access: the instance is created.
    auto& inst1 = Singleton::instance();

    // Set data.
    const std::string data{"Dummy data"};
    inst1.setData(data);
    std::cout << "Singleton instance 1 data: " << inst1.getData() << std::endl;

    // Second access: a reference of the instance previously created is returned.
    auto& inst2 = Singleton::instance();

    // Get data.
    std::cout << "Singleton instance 2 data: " << inst2.getData() << std::endl;

    // Assert that only one instance is created.
    assert(&inst1 == &inst2);

    return EXIT_SUCCESS;
}

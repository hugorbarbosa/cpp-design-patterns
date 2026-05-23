/**
 * @file
 * @copyright Copyright (C) 2024 Hugo Barbosa.
 */

#include "singleton.hpp"

namespace cpp_design_patterns {
namespace singleton {

Singleton& Singleton::instance()
{
    static Singleton instance;
    return instance;
}

void Singleton::set_data(std::string data) noexcept
{
    data_ = std::move(data);
}

std::string Singleton::get_data() const noexcept
{
    return data_;
}

} // namespace singleton
} // namespace cpp_design_patterns

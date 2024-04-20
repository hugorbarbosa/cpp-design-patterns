/**
 * @file
 * @copyright Copyright (c) 2024.
 */

#include "Singleton.h"

namespace cppDesignPatterns {
namespace singleton {

Singleton& Singleton::instance()
{
    // Unique instance.
    static Singleton uniqueInstance;
    return uniqueInstance;
}

void Singleton::setData(std::string data) noexcept
{
    mData = std::move(data);
}

std::string Singleton::getData() const noexcept
{
    return mData;
}

} // namespace singleton
} // namespace cppDesignPatterns

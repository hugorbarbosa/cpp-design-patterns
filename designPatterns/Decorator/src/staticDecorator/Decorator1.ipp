/**
 * @file
 * @copyright Copyright (c) 2024.
 */

namespace cppDesignPatterns {
namespace decorator {

template<ValidComponent Component>
template<typename... Args>
Decorator1<Component>::Decorator1(Args&&... args)
    : mComponent{std::forward<Args>(args)...}
{
}

template<ValidComponent Component>
std::string Decorator1<Component>::operation()
{
    return mComponent.operation() + ", decorator 1";
}

} // namespace decorator
} // namespace cppDesignPatterns

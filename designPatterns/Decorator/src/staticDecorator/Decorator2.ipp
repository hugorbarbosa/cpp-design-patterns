/**
 * @file
 * @copyright Copyright (c) 2024.
 */

namespace cppDesignPatterns {
namespace decorator {

template<ValidComponent Component>
template<typename... Args>
Decorator2<Component>::Decorator2(Args&&... args)
    : Component{std::forward<Args>(args)...}
{
}

template<ValidComponent Component>
std::string Decorator2<Component>::operation()
{
    return Component::operation() + ", decorator 2";
}

} // namespace decorator
} // namespace cppDesignPatterns

/**
 * @file
 * @copyright Copyright (c) 2024.
 */

namespace cpp_design_patterns {
namespace decorator {

template<ValidComponent Component>
template<typename... Args>
Decorator1<Component>::Decorator1(Args&&... args)
    : component_{std::forward<Args>(args)...}
{
}

template<ValidComponent Component>
std::string Decorator1<Component>::operation()
{
    return component_.operation() + ", decorator 1";
}

} // namespace decorator
} // namespace cpp_design_patterns

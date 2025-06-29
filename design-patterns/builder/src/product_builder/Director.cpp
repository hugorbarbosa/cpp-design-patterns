/**
 * @file
 * @copyright Copyright (c) 2023.
 */

#include "Director.h"
#include <cassert>

namespace cppDesignPatterns {
namespace builder {

Director::Director(std::unique_ptr<IProductBuilder> builder)
    : mProductBuilder{std::move(builder)}
{
    assert(mProductBuilder != nullptr);
}

Product Director::construct() noexcept
{
    // Process to build the product.
    mProductBuilder->buildPartA();
    mProductBuilder->buildPartB();

    return mProductBuilder->getResult();
}

} // namespace builder
} // namespace cppDesignPatterns

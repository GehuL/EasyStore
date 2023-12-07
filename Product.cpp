#include "Product.h"

std::ostream& operator<<(std::ostream& os, const Product& product)
{
    os << "=== " << product.title() << " ===" << '\n';
    os << " - Quantity : " << product.quantity() << '\n';
    os << " - Price : " << product.price().price() << '\n';
    os << '\n' << product.description() << '\n';

    return os;
}

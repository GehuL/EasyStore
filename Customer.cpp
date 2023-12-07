#include "Customer.h"

Customer(const std::string& last_name, const std::string& first_name)
    : _last_name(last_name), _first_name(first_name)
{
    _uuid = Uuid();
    _shopping_cart = std::vector<const Product&>::new();
}

std::ostream& operator<<(std::ostream os, const Customer& customer)
{
    os << "- Nom : " << customer.last_name() << '\n';
    os << "- Prénom : " << customer.first_name() << '\n';
    os << "- Id : " << customer.uuid().id() << '\n';

    os << '\n'

    for (auto product : _shopping_cart)
        os << product;

    os << '\n';
    return os;
}

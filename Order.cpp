#include "Order.h"

Order(const Customer& customer, const std::vector<const Product&>& products): _customer(customer), _products(products)
{
}

void Order::set_status(Status status)
{
    _status = status;
}

std::ostream& Order::operator<<(std::ostream& os, Order& order)
{
    os << "Order for " << order._customer.firt_name()[0] << ". " << order._customer.last_name() << std::endl;
    os << "Status: " << to_string(order._status) << std::endl;
    for(auto product : order._products)
    {
        os << product << std::endl;
    }
    return os;
}

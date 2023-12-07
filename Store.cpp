#include "Store.h"
#include <algorithm>

Store::Store() {}

void Store::add_product(Product &product)
{
    _products.push_back(product);
}

void Store::add_customer(Customer& customer)
{
    _customers.push_back(customer);
}

Status Store::check_order(const Order& order) const
{
    for(auto order_product : order.get_products())
    {
        auto it = std::find(_products.begin(), _products.end(), [order_product] (Product& product) 
        { return order_product.title() == product.title();}));

    }
    
    return Status::APPROVED;
}

Status Store::update_status(Order& order)
{
    Status status = check_order(order);
    order.set_status(status);
    return status;
}

std::ostream& Store::operator<<(std::ostream& os, Customer& customer)
{
    return os;
}

std::ostream& Store::operator<<(std::ostream& os, Store& store)
{
    return os;
}

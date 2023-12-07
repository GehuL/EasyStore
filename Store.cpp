#include "Store.h"

Store::Store() {}

void Store::add_product(Product &product)
{
}

Status Store::check_order(const Order& order) const
{
    return Status::APPROVED;
}

Status Store::update_status(Order& order)
{
    Status status = check_order(order);
    order.set_status(status);
    return status;
}


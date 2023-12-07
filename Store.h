#ifndef COMMAND_H_
#define COMMAND_H_

#include <vector>
#include <ostream>

#include "Product"
#include "Customer.h"
#include "Order.h"

class Store
{
    public:
        Store();

        void add_product(Product& product);

        // Check the order and return the corresponding status, order is not modified.
        Status check_order(const Order& order) const;

        // Check the order and modify the order's status. Return the new status.
        Status update_status(Order& order);

        void print_orders(std::ostream& os) const;

        std::ostream& operator<<(std::ostream& os, Customer& customer);

    private:
        std::vector<Product> _products;
        std::vector<Customer> _customer;
        std::vector<Order> orders;
};

#endif
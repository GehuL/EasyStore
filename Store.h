#ifndef COMMAND_H_
#define COMMAND_H_

#include <vector>
#include <ostream>

#include "Product.h"
#include "Customer.h"
#include "Order.h"

namespace EasyShop
{
    class Store
    {
        public:
            Store();

            void add_product(Product& product);

            void add_customer(Customer& customer);

            // Check the order and return the corresponding status, order is not modified.
            Status check_order(const Order& order) const;
    
            // Check the order and modify the order's status. Return the new status.
            Status update_status(Order& order);

            // Search and update the ammount of the given product's name. Return the new ammount.
            int update_ammount(const std::string& product);

            std::ostream& print_orders(std::ostream& os, const std::string& name) const;
            std::ostream& print_customers(std::ostream& os) const;

            // Print all prodcuts in store
            friend std::ostream& operator<<(std::ostream& os, Store& store);

            std::ostream& print_customer(std::ostream& os, const std::string& last_name);
            std::ostream& print_customer(std::ostream& os, size_t id);

        private:
            std::vector<Product> _products;
            std::vector<Customer> _customer;
            std::vector<Order> orders;
    };

    std::ostream& operator<<(std::ostream& os, Customer& customer);
}

#endif
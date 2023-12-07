#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <ostream>
#include <vector>

#include "Uuid.h"
#include "Product.h"

class Customer
{
public:
    Customer(const std::string& last_name, const std::string& first_name);

    Uuid uuid() const { return _id; }
    const std::string& last_name() { return _last_name; }
    const std::string& first_name() { return _first_name; }
    const std::vector<const Product&>& shopping_cart() { return _shopping_cart; }

    void set_last_name(const std::string& last_name) { _last_name = last_name; }
    void set_first_name(const std::string& first_name) { _first_name = first_name; }

    void add_to_cart(const Product& product) { _shopping_cart.push_back(product); }
    void remove_from_cart(size_t index) { _shopping_cart.erase(_shopping_cart.begin() + index); }
    void clear_cart() { _shopping_cart.clear(); }
    void set_cart_product_quantity(size_t index, unsigned long long quantity) { _shopping_cart.at(index).update_quantity(quantity); }

private:
    Uuid _id;

    std::string _last_name;
    std::string _first_name;

    std::vector<const Product&> _shopping_cart;
}

std::ostream& operator<<(std::ostream os, const Customer& customer);

#endif

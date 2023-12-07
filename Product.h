#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <string>
#include <ostream>
#include "Euro.h"

class Product
{
public:
    Product(const std::string& title, const std::string& description, unsigned long long quantity, const Euro& price)
        : _title(title), _description(description), _quantity(quantity), _price(price) {}

    const std::string& title() const { return _title; }
    const std::string& description() const { return _description; }
    unsigned long long quantity() const { return _quantity; }
    Euro price() const { return _price; }

    void update_quantity(unsigned long long quantity) { _quantity = quantity; }

private:
    std::string _title;
    std::string _description;
    unsigned long long _quantity;
    Euro _price;
};

std::ostream& operator<<(std::ostream& os, const Product& product);

#endif
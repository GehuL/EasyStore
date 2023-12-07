#ifndef ORDER_H_
#define ORDER_H_

#include <vector>
#include <ostream>

#include "Customer.h"
#include "Product.h"

enum class Status
{
    DELIVERED,
    ONGOING,
    APPROVED,
    NOT_APPROVED
};

std::string to_string(Status& status)
{
    switch(status)
    {
        case DELIVERED:
            return "delivered";
        case ONGOIN:
            return "pending";
        case NOT_APPROVED:
            return "not approved";
        case APPROVED:
            return "approved";
        default:
            return "unknown";
    }
}

class Order
{
    public:
        Order(const Customer& customer, const std::vector<const Product&>& products);

        void set_status(Status status);

        inline Status get_status() const { return _status; };

        inline Customer& get_customer() const { return _customer; };

        inline const std::vector<const Product&>& get_products() const { return _products; };

        std::ostream operator<<(std::ostream& os, Order& order);

    private:

    const std::vector<const Product&>> _products;
    const Customer& _customer;
    Status _status;
};

#endif
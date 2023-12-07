#include "Euro.h"

Euro::Euro(float euros)
    : _price(100*euros) {}

Euro& Euro::operator+=(const Euro& right_hand_side)
{
    _price += right_hand_side.price_in_cents();
    return *this;
}

Euro& Euro::operator-=(const Euro& right_hand_side)
{
    _price -= right_hand_side.price_in_cents();
    return *this;
}

Euro& Euro::operator*=(unsigned right_hand_side)
{
    _price *= right_hand_side;
    return *this;
}


Euro operator+(Euro left_hand_side, const Euro& right_hand_side)
{
    left_hand_side += right_hand_side;
    return left_hand_side;
}

Euro operator-(Euro left_hand_side, const Euro& right_hand_side)
{
    left_hand_side -= right_hand_side;
    return left_hand_side;
}

Euro operator*(unsigned left_hand_side, Euro right_hand_side)
{
    right_hand_side *= left_hand_side;
    return right_hand_side;
}

#ifndef EURO_H_
#define EURO_H

// Represents the price in euro

class Euro
{
public:
    Euro(float euros);
    float price() const { return static_cast<float>(_price) / 100.0; }

    unsigned long long price_in_cents() const { return _price; }

    Euro& operator+=(const Euro& right_hand_side);
    Euro& operator-=(const Euro& right_hand_side);
    Euro& operator*=(unsigned right_hand_side);

private:
    unsigned long long _price; // in cents
};

Euro operator+(Euro left_hand_side, const Euro& right_hand_side);
Euro operator-(Euro left_hand_side, const Euro& right_hand_side);
Euro operator*(unsigned left_hand_side, Euro right_hand_side);

#endif 
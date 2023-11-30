#include <iostream>

class Fraction
{
public:
    void cinNums();
    void resultFraction();
    void plusFraction();
    void minusFraction();
    void multiplyFraction();
    void divideFraction();
    void operationFraction();

    int numerator{}, denominator{}, s_numerator{}, s_denominator{};
    char operation{};
};

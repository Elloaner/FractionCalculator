#include <iostream>

class Fraction
{
    int numerator;
    int denominator;

public:
    void cinNums()
    {
        cout << "Enter numerator: ";
        cin >> numerator;
        system("cls");
        cout << "Enter denominator: ";
        cin >> denominator;
        system("cls");
        if (denominator == 0)
        {
            cout << "Denominator cannot be equal to zero" << endl;
            denominator = 1;
        }
    }

    void showFraction()
    {
        cout << numerator << "\n"
            << char(196) << "\n"
            << denominator << endl;
    }

    Fraction plus(Fraction second)
    {
        int resultNum = numerator * second.denominator + second.numerator * denominator;
        int resultDenom = denominator * second.denominator;
        return Fraction(resultNum, resultDenom);
    }

    Fraction minus(Fraction second)
    {
        int resultNum = numerator * second.denominator - second.numerator * denominator;
        int resultDenom = denominator * second.denominator;
        return Fraction(resultNum, resultDenom);
    }

    Fraction multiply(Fraction second)
    {
        int resultNum = numerator * second.numerator;
        int resultDenom = denominator * second.denominator;
        return Fraction(resultNum, resultDenom);
    }

    Fraction divide(Fraction second)
    {
        int resultNum = numerator * second.denominator;
        int resultDenom = denominator * second.numerator;
        return Fraction(resultNum, resultDenom);
    }
};
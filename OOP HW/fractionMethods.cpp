#include "fraction.h"

using namespace std;

void Fraction::cinNums()
{
    cout << "Enter first fraction\nEnter numerator : ";
    cin >> numerator;
    cout << "Enter denominator : ";
    cin >> denominator;
    if (denominator == 0)
    {
        cout << "Denominator cannot be equal to zero" << endl;
        denominator = 1;
        system("cls");
    }
    cout << "Enter second fraction\nEnter numerator : ";
    cin >> s_numerator;
    cout << "Enter denominator : ";
    cin >> s_denominator;
    if (s_denominator == 0)
    {
        cout << "Denominator cannot be equal to zero" << endl;
        s_denominator = 1;
        system("cls");
    }
    system("cls");
    cout << "Select operation : ";
    cin >> operation;
}

void Fraction::resultFraction()
{
    int nod = 1;
    for (int i = 2; i <= (numerator < denominator ? numerator : denominator); i++)
    {
        if (numerator % i == 0 && denominator % i == 0)
        {
            nod = i;
        }
    }

    int resultNum = numerator / nod;
    int resultDenom = denominator / nod;

    if (resultDenom == 1)
    {
        cout << "Result: " << resultNum << endl;
    }
    else
    {
        cout << "Result:\n" << resultNum << "\n"
            << char(196) << "\n"
            << resultDenom << endl;
    }
}

void Fraction::plusFraction()
{
    int resultNum = numerator * s_denominator + s_numerator * denominator;
    int resultDenom = denominator * s_denominator;
    resultFraction();
}

void Fraction::minusFraction()
{
    int resultNum = numerator * s_denominator - s_numerator * denominator;
    int resultDenom = denominator * s_denominator;
    resultFraction();
}

void Fraction::multiplyFraction()
{
    int resultNum = numerator * s_numerator;
    int resultDenom = denominator * s_denominator;
    resultFraction();
}

void Fraction::divideFraction()
{
    int resultNum = numerator * s_denominator;
    int resultDenom = denominator * s_numerator;
    resultFraction();
}

void Fraction::operationFraction()
{
    switch (operation)
    {
    case '+':
        plusFraction();
        break;
    case '-':
        minusFraction();
        break;
    case '*':
        multiplyFraction();
        break;
    case '/':
        divideFraction();
        break;
    default:
        cout << "Wrong operation" << endl;
        break;
    }
}

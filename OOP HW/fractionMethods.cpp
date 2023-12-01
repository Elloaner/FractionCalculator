#include <iostream>
#include "fraction.h"

using namespace std;

void Fraction::FractionInput()
{
	cout << "Enter first fraction\nEnter numerator : ";
	cin >> numerator;
	cout << "Enter denominator : ";
	cin >> denominator;
	system("cls");
	cout << "Enter second fraction\nEnter numerator : ";
	cin >> s_numerator;
	cout << "Enter denominator : ";
	cin >> s_denominator;
	system("cls");
	cout << "Select operation : ";
	cin >> operation;
	system("cls");
}

void Fraction::FractionResult(int& numerator, int& denominator)
{
	if (denominator == 1)
	{
		cout << "Result : " << numerator << endl;
	}
	else
	{
		int NOD = 1;
		for (int i = 2; i <= (numerator < denominator ? numerator : denominator); i++) 
		{
			if (numerator % i == 0 && denominator % i == 0) 
			{
				NOD = i;
			}
		}
		numerator /= NOD; denominator /= NOD;
		cout << "Result :\n" << numerator << "\n" << char(196) << "\n" << denominator << endl;
	}
}

void Fraction::FractionAdd(int& r_numerator, int& r_denominator)
{
	r_numerator = (numerator * s_denominator) + (numerator * s_denominator);
	r_denominator = denominator * s_denominator;
	FractionResult(r_numerator, r_denominator);
}

void Fraction::FractionSubtract(int& r_numerator, int& r_denominator)
{
	r_numerator = (numerator * s_denominator) - (s_numerator * denominator);
	r_denominator = denominator * s_denominator;
	FractionResult(r_numerator, r_denominator);
}

void Fraction::FractionMultiply(int& r_numerator, int& r_denominator)
{
	r_numerator = numerator * s_numerator;
	r_denominator = denominator * s_denominator;
	FractionResult(r_numerator, r_denominator);
}

void Fraction::FractionDivide(int& r_numerator, int& r_denominator)
{
	r_numerator = numerator * s_denominator;
	r_denominator = s_numerator * denominator;
	FractionResult(r_numerator, r_denominator);
}

void Fraction::FractionOperation(int& r_numerator, int& r_denominator)
{
	switch (operation)
	{
	case '+':
		FractionAdd(r_numerator, r_denominator);
		break;
	case '-':
		FractionAdd(r_numerator, r_denominator);
		break;
	case '*':
		FractionAdd(r_numerator, r_denominator);
		break;
	case '/':
		FractionAdd(r_numerator, r_denominator);
		break;
	default:
		cout << "Wrong operation" << endl;
		break;
	}
}
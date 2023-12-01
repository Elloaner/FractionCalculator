#include <iostream>
#include "fraction.h"

using namespace std;

int main()
{
	Fraction calculator;
	calculator.FractionInput();
	int r_numerator, r_denominator;
	calculator.FractionOperation(r_numerator, r_denominator);
	system("cls");
	calculator.FractionResult(r_numerator, r_denominator);
}
#include "fraction.h"

using namespace std;

int main()
{
	Fraction frac1, frac2, result;
	short operation{};
	cout << "Enter first fraction : " << endl;
	frac1.cinNums();
	cout << "Enter second fraction : " << endl;
	frac2.cinNums();
	cout << "Select operation :\n1 - Plus\n2 - Minus\n3 - Multiply\n4 - Divide\n";
	cin >> operation;
	system("cls");
	if (operation < 1 && operation > 4)
	{
		cout << "Wrong operation" << endl;
	}
	else if (operation == 1)
	{
		result = frac1.plus(frac2);
		cout << "Result : " << endl;
		result.showFraction();
	}
	else if (operation == 2)
	{
		result = frac1.minus(frac2);
		cout << "Result : " << endl;
		result.showFraction();
	}
	else if (operation == 3)
	{
		result = frac1.multiply(frac2);
		cout << "Result : " << endl;
		result.showFraction();
	}
	else if (operation == 4)
	{
		result = frac1.divide(frac2);
		cout << "Result : " << endl;
		result.showFraction();
	}
}
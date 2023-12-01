class Fraction
{
public:
	int numerator{}, denominator{}, s_numerator{}, s_denominator{};
	char operation{};
	void FractionInput();
	void FractionResult(int& numerator, int& denominator);
	void FractionAdd(int& numerator, int& denominator);
	void FractionSubtract(int& numerator, int& denominator);
	void FractionMultiply(int& numerator, int& denominator);
	void FractionDivide(int& numerator, int& denominator);
	void FractionOperation(int& numerator, int& denominator);
};
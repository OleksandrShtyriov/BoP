#include "Complex.h"

Complex::Complex(double a, double b)
{
	a = a;
	b = b;
}

double Complex::abs()
{
	double result = sqrt(a * a + b * b);
	return result;
}

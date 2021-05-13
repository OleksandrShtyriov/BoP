#include "Complex.h"

int main()
{
	Complex z(3, 2);

	std::cout << "|2i + 3| = " << z.abs() << ".\n";

	system("pause");
	return 0;
}

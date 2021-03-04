#include <iostream>
using namespace std;

//варіант 3

int main()
{
	cout << "Exercise 1: " << endl;
	int n;
	char c = 'A';
	
	cout << "Input a number: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << c << " ";
		cout << endl;
		c++;
	}

	cout << "Exercice 2: " << endl;
	int a, b, max, result;

	cout << "Input the first number: ";
	cin >> a;
	cout << "Input the second number: ";
	cin >> b;
	
	max = (a > b) ? a : b;

	for (int i = max; 1 == 1; i++)
		if (i % a == 0 && i % b == 0)
		{
			result = i;
			break;
		}

	cout << "LCM(" << a << ", " << b << ") = " << result << "." << endl;

	system("pause");
	return 0;
}
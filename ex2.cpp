#include <iostream>
using namespace std;

int number_from_odd_positions(int number) {
	int last_digit;
	int digit = 1, result = 0;

	while (number > 0) {
		last_digit = number % 10;

		if (digit % 2) {
			for (int i = 0; i < digit / 2; i++)
				last_digit *= 10;
			result += last_digit;
		}

		number /= 10;
		digit++;
	}

	return result;
}

bool is_prime(int number) {
	for (int i = 2; i <= number / 2; i++)
		if (number % i == 0)
			return false;
	return true;
}

int main() {
	int number, odd, prime;

	cout << "Input a number: ";
	cin >> number;

	odd = number_from_odd_positions(number);
	prime = is_prime(odd);

	cout << odd << " ";
	cout << ((prime == true) ? "is prime." : "is not prime.") << endl;

	system("pause");
	return 0;
}
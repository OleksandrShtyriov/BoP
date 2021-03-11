#include <iostream>
using namespace std;

int i_th_element(int i) {
	int a;
	int a0 = 1;

	for (int j = 1; j <= i; j++)
	{
		a = 3 * a0 - 5;
		a0 = a;
	}

	return a0;
}

int sum_series(int n) {
	if (n == 0)
		return i_th_element(0);
	return i_th_element(n) + sum_series(n - 1);
}

int main() {
	int N;
	
	cout << "Input the index of the partial sum: ";
	cin >> N;

	cout << "The sum is " << sum_series(N) << "." << endl;

	system("pause");
	return 0;
}
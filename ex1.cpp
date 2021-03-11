#include <iostream>
using namespace std;

float approximate_cos(float x, float epsilon) {
	float a = 1;
	int i = 2;
	float s = a;

	do {
		a *= (-1 * x * x) / (i * (i - 1));
		s += a;
		i += 2;
	} while (abs(a) > epsilon);

	return s;
}

int main(){
	float x, epsilon, cos_exact, cos_approximate, delta;
	
	cout << "Input a float number: ";
	cin >> x;
	cout << "Input a precision: ";
	cin >> epsilon;

	cos_exact = cos(x);

	cos_approximate = approximate_cos(x, epsilon);
	delta = abs(cos_exact - cos_approximate);

	cout << "The exact value of cos(" << x << ") is: " << cos_exact << "." << endl;
	cout << "The approximate value of cos(" << x << ") is: " << cos_approximate << "." << endl;
	cout << "The difference is " << delta << "." << endl;

	system("pause");
	return 0;
}

#include "Car.h"
using namespace std;

int main()
{
	Pair pair = readCars("cars.txt");
	Car* cars = pair.cars;
	int n = pair.n;
	cars = sortCars(cars, n);
	putCars(cars, n, "carsout.txt");

	int minIndex = 0;

	for (int i = 1; i < n; i++)
		if (cars[i].year < cars[minIndex].year)
			minIndex = i;

	std::cout << cars[minIndex].name << " " << cars[minIndex].model << " " << cars[minIndex].year << " " 
		<< cars[minIndex].capacity << "\n";

	system("pause");
	return 0;
}
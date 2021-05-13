#include "Car.h"

Car* addElement(Car* arr, int n, Car car)
{
	Car* newArr = new Car[n + 1];
	int i = 0;

	while (i < n)
	{
		newArr[i] = arr[i];
		i++;
	}
	newArr[i] = car;

	return newArr;
}

Pair readCars(const char* filename)
{
	int n = 0;
	Car* cars = new Car[n];
	Car car;
	Pair pair;
	std::ifstream fin(filename);
	
	while (fin >> car.name)
	{
		fin >> car.model;
		fin >> car.year;
		fin >> car.capacity;

		cars = addElement(cars, n, car);
		n++;
	}

	fin.close();

	pair.cars = cars;
	pair.n = n;

	return pair;
}

void putCars(Car* cars, int n, const char* filename)
{
	std::ofstream fout(filename);

	for (int i = 0; i < n; i++)
	{
		fout << cars[i].name << " ";
		fout << cars[i].model << " ";
		fout << cars[i].year << " ";
		fout << cars[i].capacity << "\n";
	}

	fout.close();
}

bool cmpCars(Car car1, Car car2)
{
	if (car1.name != car2.name)
		return car1.name > car2.name;
	if (car1.model != car2.model)
		return car1.model != car2.model;

	return true;
}

Car* sortCars(Car* cars, int n)
{
	std::sort(cars, cars + n, cmpCars);
	return cars;
}

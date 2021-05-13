#pragma once
#include <iostream>
#include <fstream>
#include <algorithm>
#define MAX_SIZE 255

struct Car
{
	char name[MAX_SIZE];
	char model[MAX_SIZE];
	int year;
	double capacity;
};

struct Pair
{
	Car* cars;
	int n;
};

Car* addElement(Car* arr, int n, Car car);

Pair readCars(const char* filename);
void putCars(Car* cars, int n, const char* filename);

bool cmpCars(Car car1, Car car2);
Car* sortCars(Car* cars, int n);

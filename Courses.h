#pragma once
#include <iostream>
#include <fstream>
#define MAX_SIZE 255

struct Pair
{
	char** students;
	int n;
};

bool contains(char* str, char** arr, int n);
char** addElement(char** arr, int n, char* elem);

Pair getStudents(const char* filename1, const char* filename2, const char* filename3);

Pair readStudents(const char* filename);
void putStudents(char** students, int n, const char* filename);

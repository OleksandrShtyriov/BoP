#include "Courses.h"

bool contains(char* str, char** arr, int n)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == str)
			return true;

	return false;
}

char** addElement(char** arr, int n, char* elem)
{
	char** newArr = new char*[n + 1];
	int i = 0;

	while (i < n)
	{
		newArr[i] = arr[i];
		i++;
	}
	newArr[i] = elem;

	return newArr;
}

Pair readStudents(const char* filename)
{
	int n = 0;
	char** students = new char*[n];
	char* student = new char[MAX_SIZE];
	Pair pair;
	std::ifstream fin(filename);

	while (fin >> student)
	{
		students = addElement(students, n, student);
		n++;
	}

	fin.close();

	pair.students = students;
	pair.n = n;

	return pair;
}

void putStudents(char** students, int n, const char* filename)
{
	std::ofstream fout(filename);

	for (int i = 0; i < n; i++)
	{
		fout << students[i] << "\n";
	}

	fout.close();
}

Pair getStudents(const char* filename1, const char* filename2, const char* filename3)
{
	Pair student1 = readStudents(filename1);
	char** students1 = student1.students;
	int n1 = student1.n;
	Pair student2 = readStudents(filename2);
	char** students2 = student2.students;
	int n2 = student2.n; 
	Pair student3 = readStudents(filename1);
	char** students3 = student3.students;
	int n3 = student3.n;

	int n = 0;
	char** students = new char* [n];

	for (int i = 0; i < n1; i++)
	{
		if ((!contains(students1[i], students2, n2)) && (!contains(students1[i], students3, n3)))
		{
			students = addElement(students, n, students1[i]);
			std::cout << students1[i];
		}
	}
	for (int i = 0; i < n2; i++)
	{
		if (!contains(students2[i], students1, n1) && !contains(students2[i], students3, n3))
			students = addElement(students, n, students2[i]);
	}
	for (int i = 0; i < n3; i++)
	{
		if (!contains(students3[i], students2, n2) && !contains(students3[i], students1, n1))
			students = addElement(students, n, students3[i]);
	}

	Pair toReturn;
	toReturn.n = n;
	toReturn.students = students;

	return toReturn;
}

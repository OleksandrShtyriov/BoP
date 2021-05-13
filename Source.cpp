#include "Courses.h"

int main()
{
	Pair students = getStudents("in1.txt", "in2.txt", "in3.txt");
	putStudents(students.students, students.n, "out.txt");

	for (int i = 0; i < students.n; i++)
	{
		std::cout << students.students[i] << std::endl;
	}

	system("pause");
	return 0;
}
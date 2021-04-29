#include <iostream>
#define MAX_LEN 100
using namespace std;

char* inputLine()
{
	char* line = new char[MAX_LEN];
	cout << "Input a string: ";

	cin.getline(line, MAX_LEN);
	return line;
}

bool isNumber(char symbol)
{
	return (symbol > '0' && symbol < '9');
}

char* removeNumberRepetitions(char* str)
{
	char* newStr = new char[MAX_LEN];
	int j = 0;
	bool isRepeating;

	for (int i = 0; str[i] != '\0'; i++)
	{
		isRepeating = isNumber(str[i]) && (str[i] == str[i - 1]);

		if (isRepeating)
		{
			continue;
		}
		newStr[j++] = str[i];
	}

	newStr[j] = '\0';
	return newStr;
}

int main()
{
	char* line = new char[MAX_LEN];
	line = inputLine();
	cout << removeNumberRepetitions(line) << endl;

	system("pause");
	return 0;
}
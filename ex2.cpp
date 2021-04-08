#include <iostream>
using namespace std;

int** inputMatrix(int n, int m)
{
    int** matrix;
    
    matrix = new int*[n];
    for (int i = 0; i < n; i++)
        matrix[i] = new int[m];
    
    for (int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cout << "Input element[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    
    return matrix;
}

int** reverse(int n, int m, int** matrix)
{
    int** reverse;
    
    reverse = new int*[m];
    for (int i = 0; i < m; i++)
        reverse[i] = new int[n];
    
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            reverse[i][j] = matrix[j][i];
            
    return reverse;
}

bool isWithoutRepetitions(int n, int* arr)
{
    for (int i = 0; i < n; i++)
        for(int j = i; j < n; j++)
        {
            if(i != j && arr[j] == arr[i])
                return false;
        }
    return true;
}

bool isLatinSquare(int n, int** matrix)
{
    for (int i = 0; i < n; i++)
        if(!isWithoutRepetitions(n, matrix[i]))
            return false;
    
    int** collumns = reverse(n, n, matrix);
            
    for (int i = 0; i < n; i++)
        if(!isWithoutRepetitions(n, collumns[i]))
            return false;
    
    return true;
}

void checkLatinSquare()
{
    int n;
    int** matrix;
    
    cout << "Input n: ";
    cin >> n;
    matrix = inputMatrix(n, n);
    
    cout << (isLatinSquare(n, matrix) ? "The matrix is a latin square."
    : "The matrix is not a latin square.");
    cout << endl;
}

int main()
{
    checkLatinSquare();
    
    return 0;
}

#include <iostream>
using namespace std;

int* inputArray(int n)
{
    int* arr;
    arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Input element[" << i << "]: ";
        cin >> arr[i];
    }
    
    return arr;
}

void printArray(int n, int* arr)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

bool isInArr(int n, int* arr, int value)
{
    int counter = 0;
    
    for(int i = 0; i < n; i++)
        counter += (arr[i] == value);
        
    return (counter > 0);
}

int* arrayWithoutRepetitions(int n, int* arr, bool print = false)
{
    int count = 0;
    int* arr1, *result;
    arr1 = new int[n];
    
    for (int i = 0; i < n; i++)
        if(!isInArr(n, arr1, arr[i]))
        {
            arr1[count] = arr[i];
            count++;
        }
    
    result = new int[count];
    for(int i = 0; i < count; i++)
        result[i] = arr1[i];
        
    if (print)
        printArray(count, result);
        
    return result;
}

void testArrayWithoutRepetitions()
{
    int n;
    int *arr;
    
    cout << "Input the number of elements: ";
    cin >> n;
    arr = inputArray(n);
    
    arrayWithoutRepetitions(n, arr, true);
}

int main()
{
    testArrayWithoutRepetitions();
    
    return 0;
}

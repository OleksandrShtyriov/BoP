#include <iostream>
using namespace std;

int* inputArray(int n)
{
    int* arr;
    
    arr = new int[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Input arr[" << i << "]: ";
        cin >> arr[i];
    }
    
    return arr;
}

bool isSaddle(int n, int* arr)
{
    bool fall = false, rise = false;
    int countFall = 0, countRise = 0;
    int i = 1;
    
    do {
        fall = (arr[i - 1] > arr[i]);
        
        if (fall)
            countFall++;
        i++;
    } while (fall && i < n);
    
    if (!countFall || i == n)
        return false;
    
    do {
        rise = (arr[i] > arr[i - 1]);
       
        if (rise)
            countRise++;
        i++;
    } while (rise and i < n);
    
    if(!countRise || i < n)
        return false;
    return true;
}

void testSaddle()
{
    int n;
    int* arr;
    
    cout << "Input the number of elements: ";
    cin >> n;
    
    arr = inputArray(n);
    cout << (isSaddle(n, arr) ? "The array is a saddle" : "The array is not a saddle");
    cout << endl;
}

int main()
{
    testSaddle();

    return 0;
}

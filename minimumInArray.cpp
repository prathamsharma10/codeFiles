#include <iostream>
#include <limits.h>
using namespace std;

int minimumInArray(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minAns)
        {
            minAns = arr[i];
        }
    }
    return minAns;
}

int main()
{

    // cout << INT_MIN << endl; //-2147483648
    // cout << INT_MAX << endl; //2147483647

    int arr[5] = {10, 29, 11, 234, 5};
    int size = 5;

    int minimum = minimumInArray(arr, size);

    cout << "Minimum is: " << minimum << endl;
    // Minimum is: 5
    return 0;
}
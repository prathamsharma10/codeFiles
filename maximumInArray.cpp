#include <iostream>
#include <limits.h>
using namespace std;

int maximumInArray(int arr[], int size)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxAns)
        {
            maxAns = arr[i];
        }
    }
    return maxAns;
}

int main()
{

    // cout << INT_MIN << endl; //-2147483648
    // cout << INT_MAX << endl; //2147483647

    int arr[5] = {10, 29, 11, 234, 5};
    int size = 5;

    int maximum = maximumInArray(arr, size);

    cout << "Maximum is: " << maximum << endl;
    // Maximum is: 5
    return 0;
}
#include <iostream>
using namespace std;

void sortZeroAndOne(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;

    // Step 1 Count 0 and 1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            zeroCount++;
        if (arr[i] == 1)
            oneCount++;
    }
    // Step 2 Place all 0's  first
    int i;
    for (i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }
    // Step 3 Place all 1's then
    for (int j = i; j < n; j++)
    {
        arr[j] = 1;
    }
}

int main()
{

    int arr[] = {1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0};
    // 0=>6 , 1=>6
    int n = 12;

    sortZeroAndOne(arr, n);
    // print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
using namespace std;

void printAllTriplets(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")";
            }
        }
    }
}

int main()
{

    int arr[] = {1, 2, 3};
    int n = 3;

    printAllTriplets(arr, n);

    return 0;
}
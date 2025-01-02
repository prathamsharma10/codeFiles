#include <iostream>
using namespace std;

void shiftArrayBy1(int arr[], int n)
{
    // Step1 store n-1 in temp
    int temp = arr[n - 1];

    // Step2 Shift => arr[i]=arr[i-1]
    for (int i = n - 1; i >= 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Step 3 Copy temp in 0th index
    arr[0] = temp;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    // print array before shifting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    shiftArrayBy1(arr, n);
    // print array after shifting
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
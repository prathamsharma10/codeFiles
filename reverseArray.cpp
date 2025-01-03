#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    // printing
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    // using swap function
    // swap(arr[0],arr[5])

    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    reverseArray(arr, size);

    return 0;
}
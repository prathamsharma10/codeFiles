#include <iostream>
using namespace std;

int getUniqueElements(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[] = {2, 10, 11, 2, 13, 10, 15, 13, 15};
    int size = 9;

    int finalAns = getUniqueElements(arr, size);
    cout << "Final ans is: " << finalAns << endl;

    return 0;
}
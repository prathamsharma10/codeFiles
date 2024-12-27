#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            // found
            return true;
        }
        return false;
    }
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int target = 400;
    int size = 5;

    bool ans = linearSearch(arr, size, target);

    if (ans == 1)
    {
        cout << "Target Found" << endl;
    }
    else
    {
        cout << "Target Not Found" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int incrementBy1(int &n)
{
    n = n + 1;
}

int main()
{
    int n;
    cin >> n;
    incrementBy1(n);
    cout << n << endl;

    return 0;
}
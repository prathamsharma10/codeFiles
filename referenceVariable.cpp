#include <iostream>
using namespace std;

int main()
{

    // original and normal integer variable
    int n = 5;

    // reference variable referring to n
    // int & variable name

    int &k = n;

    // reference variable referring to n
    int &c = n;

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    k++;

    cout << "n: " << n << endl;
    cout << "k: " << k << endl;
    cout << "c: " << c << endl;

    // int &t = 6;
    // error: invalid initialization of non-const reference of type 'int&' from an rvalue of type 'int'
    //  int &t = 6;
    // cout << t << endl;

    return 0;
}

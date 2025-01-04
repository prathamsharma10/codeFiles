#include<iostream>
using namespace std;
int main()
{
 //left shift " << "
 //right shift " >> "

 int a = 7;

 cout<< (a<<1) <<endl; //14
 cout<< (a<<2) <<endl;//28
 cout<< (a<<3) <<endl;//56

int b = 100;
cout << (b>>1) <<endl;
cout << (b>>2) <<endl;
cout << (b>>3) <<endl;

    return 0;
}
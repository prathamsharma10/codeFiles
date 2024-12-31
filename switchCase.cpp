#include<iostream>
using namespace std;

int main(){

    float a , b;
    cout<<"Enter Two Numbers: "<<endl;
    cin>>a>>b;
    int op;
    cout<<"Enter desired Operation: "<<endl;
    cin>>op;
    float ans =0 ;
    //0 => +, 1 => - ,2=> * ,3 => / ,other => invalid op

    switch (op)
    {
        case 0:
        cout<<"Add case";
        ans = a+b;
        break;
        case 1:
         cout<<"minus case";
        ans = a-b;
        break;
        case 2:
         cout<<"mul case";
        ans = a*b;
        break;
        case 3:
         cout<<"divide case";
        ans = a/b;
        break;

        default:
            cout<<"Invalid op";
            return 0;

    }
    cout<<"Your ans is : "<<ans;
   return 0;
}
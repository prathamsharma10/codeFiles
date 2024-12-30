#include<iostream>
using namespace std;

// function => A block of code that is linked to a well designed task.

//need => reusable,redable

// void printName(string name){
//     for(int i=0;i<5;i++){
//         cout<< name <<endl;
//     }
// }

void printLine(){

    for(int i=0;i<10;i++){
        cout<<" Hello world!" <<endl;
    }
}

int addNumbers(int a, int b){
    int sum = a + b;
    return sum;
}


int main(){

    // for(int i=0;i<5;i++){
    //     cout<<"Pratham"<<endl;
    // }

    // printName("Pratham Sharma");


    //function call

    // printLine();

    int a = 110;
    int b = 20;

    int result = addNumbers(a,b);
    cout<<"Sum is: "<<result;
    

    return 0;
}




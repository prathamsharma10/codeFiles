#include<iostream>
using namespace std;

int main(){

    // break
    // for(int i=0; i<5 ;i++){

    //     if(i==2){
    //        break;
    //     }
    //     cout<<i<<" ";
    // }

    //continue
    for(int i=0 ; i<5 ; i++){
        if(i==3)
        continue;
        cout<<"Hello "<<i<<endl;
    }

    return 0;
}
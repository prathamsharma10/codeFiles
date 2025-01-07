// #include<iostream>
// #include<cmath>
// using namespace std;
// // Method 1
// int decimalToBinaryMethod1(int n){

//     // Division Method
//     int binaryNo = 0;
//      int i = 0;
//     
//     while(n>0){
//         int bit = n % 2;
//          binaryNo = bit*pow(10,i++) + binaryNo; 
//         
//       
//         // cout<< bit << endl;
//         n = n / 2;
//     }
//     return binaryNo;


// }


// int main(){

//     int n;
//     cout<<"Enter the decimal number: ";
//     cin>>n;
//     int binary = decimalToBinaryMethod1(n);
//     cout<<"Binary of Decimal number is: "<<binary<<endl;

//     return 0;
// }

// chat gpt solution

#include <iostream>
using namespace std;

// Method 1
int decimalToBinaryMethod1(int n) {
    int binaryNo = 0;
    int i = 1; // Multiplier for correct binary position

    while (n > 0) {
        int bit = n % 2;       // Extract the last binary bit
        binaryNo = bit * i + binaryNo; // Update the binary number
        i *= 10;               // Move to the next binary position
        n = n / 2;             // Reduce the number
    }
    return binaryNo;
}

int main() {
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    int binary = decimalToBinaryMethod1(n);
    cout << "Binary of Decimal number is: " << binary << endl;

    return 0;
}

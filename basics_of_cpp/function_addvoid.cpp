#include<iostream>
using namespace std;
// Code showing void function
void sum(int num1, int num2){ // The parameter variables which are initialized inside a function are specialized, they are for that function only, and they need to be initailized one at a time
    cout << num1+num2 << endl; 
    // You dont take input cin in you user function, you take input in the main function
}

int main(){
    int add1, add2;
    cin >> add1 >> add2;
    sum(add1, add2);
    return 0;
}
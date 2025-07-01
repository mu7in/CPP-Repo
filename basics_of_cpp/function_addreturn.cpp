#include <iostream>
using namespace std;
// Code showing return 0 is same as void fn
int sum(int num1,int num2){ // This is pass by value
    cout << num1+num2 << endl;
    return 0; // Same thing as void fn
}

int main(){
    int add1,add2;
    cin >> add1 >> add2;
    sum(add1, add2);
    return 0;
}
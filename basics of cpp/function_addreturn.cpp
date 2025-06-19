#include <iostream>
using namespace std;

int sum(int num1,int num2){ // This is pass by value
    cout << num1+num2 << endl;
    return 0;
}

int main(){
    int add1,add2;
    cin >> add1 >> add2;
    sum(add1, add2);
    return 0;
}
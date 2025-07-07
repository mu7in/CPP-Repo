#include<iostream>
using namespace std;

void ispalindrome(int n) {
    int original,output,digit;
    original = n;
    output=0;
    while(n>0) {
        digit=n%10;
        output=(output*10)+digit;

        n=n/10;
    }
    if(output==original) {
        cout << "True";
    }
    else cout << "False";
}

int main() {
    int i,testcases,input;
    cin >> testcases;
    for(i=0;i<testcases;i++) {
        cin >> input;
        ispalindrome(input);
    }
}
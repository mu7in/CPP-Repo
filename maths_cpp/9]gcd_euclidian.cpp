#include<bits/stdc++.h>
using namespace std;

void gcd_euclidian(int n1,int n2) {
    /*while(n1>0 && n2>0) {
        if(n1%n2==0) { // This is wrong becn1use of the working of while loop
            cout << n2;
        }
        if(n2%n1==0) {
            cout << n1;
        }
    }*/

    while(n1>0 && n2>0) {
        if(n1>n2) {
            n1=n1%n2;
        }
        else {
            n2=n2%n1;
        }
    }
    if(n1==0) {
        cout << n2;
    }
    else {
        cout << n1;
    }
}

int main() {
    int input1,input2;
    cin >> input1 >> input2;
    gcd_euclidian(input1,input2);
}
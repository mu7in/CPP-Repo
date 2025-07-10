#include<bits/stdc++.h>
using namespace std;

void gcd_optimized(int n1,int n2) {
    while(n2 != 0) {
        int temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    cout << n1;
}

int main() {
    int input1,input2;
    cin >> input1 >> input2;
    gcd_optimized(input1,input2);
}
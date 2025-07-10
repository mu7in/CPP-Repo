#include<bits/stdc++.h>
using namespace std;

void findgcd(int n1,int n2) {
    int gcd,div;
    for(div=1;div<=min(n1,n2);div++) {
        if(n1%div==0 && n2%div==0) {
            gcd=div;
        }
    }
    cout << gcd; // You cant directly print div as div will be one value higher. You can continue from if loop and then print div-1
}

int main() {
    int input1,input2;
    cin >> input1 >> input2;
    findgcd(input1,input2);
}
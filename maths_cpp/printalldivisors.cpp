#include<iostream>
using namespace std;

int main() {
    int num,n;
    cin >> n;
    for(num=1;num<=n;num++) {
        if(n%num==0) {
        cout << num << " ";
        }
    }
}
#include<iostream>
using namespace std;
void pattern2(int n) {
    // Pattern: Rt angle triangle with * according to input nXn rows and columns dimensions
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=0;j<i;j++) {
            cout << '*';
        }
        cout << endl;
    }
}
// We can close one function and write another like this, the closed function is runned but it is not called anywhere so not shown anywhere in output

void pattern3(int n) {
    // Pattern: Rt angle triangle with 1,1 2,1 2 3 according to input nXn rows and columns dimensions
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            cout << j << ' ';
        }
        cout << endl;
    }
}

int main() {
    int i,testcases,size;
    cin >> testcases;
    for(i=0;i<testcases;i++) {
        cin >> size;
        pattern2(size);
    }
}
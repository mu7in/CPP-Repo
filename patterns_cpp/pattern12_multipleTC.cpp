#include<iostream>
using namespace std;

void pattern12(int n) {
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            cout << j;
        }
        cout << endl;
    }

}

int main() {
    int i,t,input;
    cin >> t;
    for(i=0;i<t;i++) {
        cin >> input;
        pattern12(input);
    }
}

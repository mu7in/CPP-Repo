#include<iostream>
using namespace std;

void pattern9(int n) {
    int i,j,k;
    for(i=1;i<=n;i++) { // Simply merge 7 & 8
        for(j=1;j<=n-i;j++) {
            cout << " ";
        }
        for(k=1;k<=2*i-1;k++) {
            cout << '*';
        }
        cout << endl;
    }

    for(i=1;i<=n;i++) {
        for(j=0;j<i-1;j++) {
            cout << " ";
        }
        for(k=1;k<=2*(n-i)+1;k++) {
            cout << '*';
        }
        cout << endl;
    }
}

void pattern10(int n) { //IMP
    int i,j;
    for(i=1;i<=n;i++) { // Merge 2 & 5 while reducing one row from 5
        for(j=0;j<i;j++) {
            cout << '*';
        }
        cout << endl;
    }

    for(i=1;i<=n;i++) {
        for(j=n-1;j>=i;j--) {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n) { //IMP
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=i;j++) {
            if (i%2 != 0 && j%2 != 0) // Remember == && !==
            {
                cout << "1 ";
            }

            else if (i%2 == 0 && j%2 == 0) // Remember else if, dont directly use two if if and then else, in that case another if after if will be done compulsorily and then else will also be done
            {
                cout << "1 ";
            }

            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main() {
    int i,t,input;
    cin >> t;
    for(i=0;i<t;i++) {
        cin >> input;
        pattern11(input);
    }
}

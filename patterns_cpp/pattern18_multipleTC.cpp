#include <iostream>
using namespace std;

void pattern18(int n) { //IMP
    
    int i,j;
    char ch;
    for (i=1;i<=n;i++)
    {
        ch = 'A'+n-i; // I thought this logic completely myself
        for(j=1;j<=i;j++) {
            cout << ch++ << ' ';
       }
       cout << endl;
    }
    
    /* For CodingNinjas:
    int i,j;
    char ch;
    for (i=1;i<=n;i++)
    {
        ch = 'A'+n-1;
        for(j=1;j<=i;j++) {
            cout << ch-- << ' ';
       }
       cout << endl;
    }*/
}

void pattern21(int n) {
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n;j++) {
            if (i==1 || i==n) 
            {
                cout << "*";
            }
            else if (j==1 || j==n)
            {
                cout << "*";
            }
            else
            {
                cout << " "; // You have to print empty spaces too, program doesnt move spaces in the output, you have to print the spaces
            }
        }
        cout << endl;
    }
}

void pattern22(int n) {
    int i,j;
    for(i=0;i<2*n-1;i++) { // To work the logic you will compulsarily have to do 0 based indexing (i,j=0)
        for(j=0;j<2*n-1;j++) {
            int top=i;
            int left=j;
            int bottom=2*n-2-i; // Intense logic, remember this
            int right=2*n-2-j;

            cout << n-(min(min(top,left),min(bottom,right))); // min syntax
        }
        cout << endl;
    }
}

int main() {
    int i,testcases,size;
    cin >> testcases;
    for(i=0;i<testcases;i++) {
        cin >> size;
        pattern22(size);
    }
}
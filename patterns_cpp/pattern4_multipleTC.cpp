#include<iostream>
using namespace std;
void pattern4(int n) { /*IMP*/
    // Pattern: Rt angle triangle with 1,2 2,3 3 3 according to input nXn rows and columns dimensions
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=0;j<i;j++) {
            cout << i << ' ';
        }
        cout << endl;
    }
}

void pattern5(int n) {
    // Pattern: inverse Rt angle triangle with '*' according to input nXn rows and columns dimensions
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=n;j>=i;j--) {
            cout << "* ";
        }
        cout << endl;
    }
}

/*void pattern5(int n) {
    // Pattern: Rt angle triangle with 1,2 2,3 3 3 according to input nXn rows and columns dimensions
    int i,j;
    for(i=1;i<=n;i++) {
        for(j=i;j<=n;j++) {
            cout << * << ' ';
        }
        cout << endl;
    } // This code also works for pattern5
}*/

/*void pattern6(int n) {
    // Pattern: inverse Rt angle triangle with 1 2 3, 1 2, 1   according to input nXn rows and columns dimensions
    int i,j;
    for(i=n;i>0;i--) {
        for(j=i;j>0;j--) {
            cout << "* ";
        }
        cout << endl;
    }
}*/ // This similar approach of i-- from pattern5 will not work here, a different logic will work and you shouldve used the same logic in pattern5 too, till now we could see 3 different logics for pattern5 NOPE ACTUALLY YOUR LOGIC WAS NOT UPTO THE MARK, IT IS ACTUALLY POSSIBLE TO DO WITH i--

void pattern6(int n) { //IMP
    int i,j;
    for(i=n;i>=1;i--) { // We had to do i--
        for(j=1;j<=i;j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    // Other approaches like j=n-i+1 are also there
}

void pattern7(int n) {
    int i,j,k;
    for(i=1;i<=n;i++) {
        for(j=1;j<=n-i;j++) {
            cout << " ";
        }
        for(k=1;k<=2*i-1;k++) { // Extra k variable for empty space or -
            // Create a table of n,i,j,k and analyse the relation betn n,i,j & n,i,k to get mathematical expression to write for pattern
            cout << '*';
        }
        cout << endl;
    }
}

void pattern8(int n) { //IMP
    int i,j,k;
    for(i=1;i<=n;i++) {
        for(j=0;j<i-1;j++) {
            cout << "-"; // Use dash '-' to denote empty space, so that you can understand the logic better

            // Observe AP, transform first row term to expression and use in AP to make the AP dynamic for any number of first terms. Logic is in number of first terms k for different total number of rows
        }
        for(k=1;k<=2*(n-i)+1;k++) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    int i,testcases,size;
    cin >> testcases;
    for(i=0;i<testcases;i++) {
        cin >> size;
        pattern8(size);
    }
}

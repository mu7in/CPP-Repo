// The program is for single test case input, which is visible from the code in main fn
// We will be building a code to handle different test case inputs too in the next program
// Different test cases are required because they are given in Online CP compilers
// The extra variable to denote number of different test case inputs is inputted first, and this variable is not coded in the user function, it is done in main
// The main function is not there in online compilers, you only write the standard(no test case variable) function in the user function space provided in online compiler
// So multiple test case code is not actually essential, as your user function code is standard only

#include<iostream>
using namespace std;
void pattern1(int n) { // n will be the input number of rows and columns that are required
    // Pattern: Rectangular with * according to input nXn rows and columns dimensions
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            cout << '*';
        }
        cout << endl;
    }
}

int main() {
    int input;
    cin >> input;
    pattern1(input);
}
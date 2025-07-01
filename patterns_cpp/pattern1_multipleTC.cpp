// The program is for multiple test case inputs, which is visible from the code in main fn
// The extra variable to denote number of different test case inputs is inputted first, and this variable is not coded in the user function, it is done in main

// Number of test cases is inputted first, and then the different test case values are inputted
// The program should print the pattern with different input dimensions, t different times


#include<iostream>
using namespace std;
void pattern1(int n) {
    // Pattern: Rectangular with * according to input nXn rows and columns dimensions
    int i,j;
    for(i=0;i<n;i++) { 
        for(j=0;j<n;j++) {
            cout << '*';
        }
        cout << endl;
    }
}

/*int main() {
    int i,t,input;
    cin >> t;
    cin >> input;
    for(i=0;i<t;i++) {
        pattern1(input);        
    }
} This code doesnt actually do the function of number of different test cases according to the number inputted and the test case values inputted after it*/

int main() {
    int i,t,input;
    cin >> t;
    for(i=0;i<t;i++) {
        cin >> input;
        pattern1(input);
    }
}

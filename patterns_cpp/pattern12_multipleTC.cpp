#include<iostream>
using namespace std;

void pattern12(int n) { // IMP
    int i,j,k,l; // declare all variables outside the loops if you need to use a variable value initialized inside a for loop in another loop
    for(i=1;i<=n;i++) { // Here its essential to put i-1, as j will be put 1 becoz of printing requirments and j will be less than i therefore i also has to be 1
        for(j=1;j<=i;j++) {
            cout << j;
        }

        for(k=1;k<=2*(n-i);k++) { // Refer Notes; The AP is such that the last row has no terms, thats why automatically no terms in last row(basic understanding avoid if you already know)
            cout << '-';
        }

        for(l=i;l>=1;l--) { // Learn this technique of printing digits in reverse
            cout << l;


        }
        cout << endl;
    }
}

void pattern13(int n) {
    int i,j;
    int a=0;
    for(i=1;i<=n;i++) {

        for(j=1;j<=i;j++) {
            a++;
            cout << a << ' ';
            /*Also this can be done:
            int a;
            cout << a << ' ';
            a++;*/ 

        }

        cout << endl;
    }
}

void pattern14(int n) {
    int i;
    char ch;
    for(i=1;i<=n;i++) {
        for(ch='A';ch<'A'+i;ch++) { // Remember this for loop of writing chars
            // Remember this addition of char and integer syntax
            cout << ch << ' ';
        }
        cout << endl;
    }
}

void pattern15(int n) { //IMP
    int i;
    char ch;
    for(i=1;i<=n;i++) {
        /* You have done the reverse alhabet here
        for(ch='A'+n-i;ch>='A';ch--) {
            cout << ch;
        } */

        for(ch='A';ch<='A'+n-i;ch++) { // There are diff ways of doing this inverted rt angle triangle, remember this.
            cout << ch << ' ';
        }
        cout << endl;
    }
}

void pattern16(int n) { //IMP
    int i,j; // In this question where you print according to the value of i in every row, To print alphabets, you will have to use a third variable j apart from i & char
    char ch = 'A'; // Just observe the technique, we will be using j only, to form the pattern. And then char will be to print the alphabets
    // In the previous alphabet patterns we were using char to form the pattern and print it too
    for(i=1;i<=n;i++) {

        for(j=1;j<=i;j++) {
            cout << ch << ' ';
        }
        // Just remember this technique very carefully
        ch = 'A'+i; // You shouldn't write char ch = here again, if you write int or char again to denote a change in the value of already initialized int or char it wont work, just write variable name and then the change
        cout << endl;
    }
}

void pattern17(int n) { // IMP
    int i,j,k;
    for(i=1;i<=n;i++) {
        char ch = 'A'; // char ch = 'A' is initialized here for a reason, the reason is that after every row loop ends, the ch++ will not be carried forward into the new loop, instead every loop will start with ch = 'A'
        for(j=1;j<=n-i;j++) { // This is same as previous patterns
            cout << "  ";
        }
        for(k=1;k<=2*i-1;k++) { // Same as previous
            if (k<i) // There is a reason why k<=i was not written here and k<i just works, that is because of post increment of ch++ due to which else will be executed in first row when k=1 i=1, and A is just printed and -- of A is done and kept 
            // if k<=i is done then -- will happen one alphabet later than we want
            {
                cout << ch++ << ' '; // Learn post increment and pre increment, when you do x++, then the original value of x is used first and then it does ++ and then the new value is used.
            }
            else
            {
                cout << ch-- << ' '; // else works here nicely alphabets are not like ABCDABC, its ABCDCBA
                // Never do ch+i or 'A'+i during cout printing
            }
        }
        cout << endl;
    }

}


int main() {
    int i,testcases,size;
    cin >> testcases;
    for(i=0;i<testcases;i++) {
        cin >> size;
        pattern17(size);
    }
}

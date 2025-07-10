#include<iostream>
using namespace std;

void extraction(int n) {
    int extracted; // See that you have not initialized n again here
    while(n>0) { 
        extracted = n%10; // Know the meaning of modulo (8%10=8 not 0, 0%10=0)
        cout << extracted;
        n=n/10; // Understand the analysis properly what happens chronologically
    }

    // This code prints digits one by one instead of a single number — this is not ideal if you're required to store or return the reversed number. Therfore I have not coded return type user function here, check the reverse number program file to know how to return the number as a whole and not print one by one.

    // In coding platforms, compilers are differently coded in different questions, so its better to create new files for new questions
}

int number(int n) {
    int count=0;
    while(n>0) {
        n=n/10; // Log method also there, but for that <bits/stdc++.h> directory reqd
        count++;
    }
    return count; // Using return instead of printing in the user function as the compiler wants returned value, not directly printed from user function. The compiler will handle the printing in the main function

    // Time complexity: Whenever time complexity depends on divided by a number n, then TC will be O(log10(n))
}

// For printing in user function(no return in user function): 
int main() {
    int i,testcases,input;
    cin >> testcases;
    for(i=0;i<testcases;i++) {
        cin >> input;
        extraction(input);
    }
}

/* For printing in main function(return in user function):

int main() {
    int i,testcases,input,result;
    cin >> testcases;
    for(i=0;i<testcases;i++) {
        cin >> input;
        result=extraction(input);
        cout << result << endl;
    }
}
    */
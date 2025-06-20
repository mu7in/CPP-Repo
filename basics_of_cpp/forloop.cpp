#include<iostream>
using namespace std;
int main() {
    int i;
    for(i=0;i<=5;i++) {  // the analysis is like this: 1st- i=0 then i<=5 then code runned then i++ done, 2nd- i<=5 then code runned then i++ done.... and so on. Always make sure to build a condition such that the iterations run for as long as you want only
        //
        cout << "i is printed " << i << " iteration" << endl << "New line given intentionally" << endl;
    }

    /*for VS while:
    for: number of iterations is known or count-controlled
    Best for counter-controlled loops
    Use for loop when you know exactly how many times to repeat
    
    while: number of iterations is not known in advance
    Best for condition-controlled loops
    Use while loop when the repetition depends on a condition that may change dynamically*/  
    return 0;
}
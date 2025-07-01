// Functions are set of code which performs something for you.
// Functions are used to modularise code.
// Functions are used to increase readablity.
// Functions are used to use same code multiple times.

// Types of Functions: Void, Return, Parameterised, Non Parameterised
// Actually functions are: Void-Parameterised, Void-NonParameterised, Return-Parameterised, Return-NonParameterised
// void fn & return fn with return 0 are the same thing
// Pass by value --> only a copy of input in main fn is passed to user fn, the original input remains same
// Pass by reference (&input) --> the address of input in main fn is directly passed to user fn, the original input changes thereby
// Array is always pass by reference
// Remember the syntax & analysis of user function and main function
#include <iostream>
using namespace std;
void printname(string input){ // This is a Void-Parameterised function with 1)user defined name printname 2)parameter datatype string 3)parameter variable name input.
    //Basically Type is void with (parameter datatype string, parameter variable name input)
    // The parameter inside a function is just basically the variable which will be used inside the function
    cout << "Hey " << input << endl; // This is what the function does, with the input(string input) it will take in in the main fn
}
int main(){
    string name1; // inside this main function we are going to run the user defined function printname different times with different inputs. To do that, we are defining the first input variable that we are going to run
    cin >> name1;
    printname(name1); // This variable name1 is just used to take the input and then this variable name1 will be pushed to the parameter of the function printname, wherein the variable name is input. So now string variable input will contain the input given to string variable name1 (PASS BY VALUE)

    //THE OPPOSITE OF PASS BY VALUE IS PASS BY REFERENCE, use a & in your user function parameter variabale name declaration

    string name2; // same
    cin >> name2;
    printname(name2);
    return 0;

}
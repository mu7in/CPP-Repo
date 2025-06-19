// FUnctions are set of code which(function) performs something for you. Functions are used to modularise code. Functions are used to increase readablity. Functions are used to use same code multiple times.
// Types of Functions: Void, Return, Parameterised, Non Parameterised

#include <iostream>
using namespace std;
void printname(string input){ //This is a Void-Parameterised function with user defined name printname and parameter string with variable name input. Basically Type is void with (parameter in bracket and the datatype of parameter is string)
    // The parameter inside a function is just basically the variable which will be used inside the function
    cout << "Hey " << input << endl; //This is what the function is supposed to do, with the input(string input) it will take in in the main fn
}
int main(){
    string name1; //inside this main function we are going to run the user defined function printname different times with different inputs. To do that, we are first defining the first input that we are going to run
    cin >> name1;
    printname(name1); //This variable name is just used to take the input and then this variable name1 will be pushed to the parameter of the function printname, wherein the variable is name is input. So now string variable input will contain the input given to string variable name1 (PASS BY VALUE)

    //THE OPPOSITE OF PASS BY VALUE IS PASS BY REFERENCE, USE A & in your user function variable parameter declaration

    string name2; // same
    cin >> name2;
    printname(name2);
    return 0;

}
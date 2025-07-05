#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,digit;
    int output=0;

    cin >> n;

    while(n>0) {
        digit=n%10;
        output=(output*10)+digit; // Know this logic
        // This logic will not print zeros in the beginning of the number, thats why for this function type online coding platform question, the remove zero criteria was given because if someone tries to not use function and do by printing the extracted digits one by one then they can do without using this mathematical logic and without calling function 
        n=n/10;
    }
    cout << output;
	
}

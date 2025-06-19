#include<iostream>
using namespace std;
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult.";
    }

    else if (age <=4)
    {
        cout << "You are a toddler.";
    }
    
    return 0;
    
}
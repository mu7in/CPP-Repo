/*
There are two type of strings:
String literals: " "
String variable: x
*/ 

#include<iostream>
using namespace std;
int main() {
    string s1 = "Hello"; // string is written in " ", char is written in ' '
    cout << s1[2]; // s[] gives the character at that location, l will be printed as it is in location 2(location starts from 0)

    int len = s1.size(); // Remember this syntax, len is just a variable name, .size() gives size from 1, not 0. size is always from 1 not 0. location starts from 0
    cout << s1[len-1]; // This will give the last character, as the last character location is size-1 
    
    s1[6] = 'c'; // Here when you assigned the character to the location 6, ' ' was used as its a character not a string. Also you can observe that string s1 was initialised as "hello" which consists of 4 locations. But you have assigned a character in 6th location now
    cout << s1[6]; // final output will be loc
    return 0;

    }
//Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid
#include<iostream>
using namespace std;
int main() {
    char day;
    cin >> day;
    switch(day) {
        case 'a':
        cout << "Monday";
        break;
        case 'b':
        cout << "Tuesday";
        break;
        case '3':
        cout << "Wednesday";
        break;
        case 4: // All the numbers without ' ' will be invalid for char
        cout << "Thusday"; 
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        // didnt give a break here intentionally to show that break is actually reqd in the last case also, if default is there after it.
        default:
        cout << "Invalid";
        
        

    }
    return 0;
}
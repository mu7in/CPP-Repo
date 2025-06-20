#include<iostream>
using namespace std;
int main() {
    int arr[3]; // Arr[Size]
    /*cin >> arr[0] >> arr[1] >> arr[4]; // gave a 4th location to show that runtime error will occur
    cout << arr[1]; */
    cin >> arr[0] >> arr[1] >> arr[2]; // Arr[Location]
    arr[2] += 7.8; // Gave decimal to show that float will be reduced to integer and then 7 will be added to 3
    cout << arr[2];
    return 0;

    }
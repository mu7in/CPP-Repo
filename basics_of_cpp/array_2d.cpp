#include<iostream>
using namespace std;
int main() {
    int arr[2][3];    // int arr[no of rows][no of columns];
    arr[0][1] = 23;   // arr[row location][column location];
    cin >> arr[0][2];
    cout << arr[0][1] << " " << arr[0][2];
    return 0;

    }
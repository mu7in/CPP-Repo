#include<bits/stdc++.h> // For STL this header file is reqd
using namespace std;

void divisors_list (int n) { // We had to use vector STL here due to some limitation of list according to the compiler
    vector <int> ls;
    int num;
    //for(num=1;num<=sqrt(n);num++) { // Divisibility syntax

    for(num=1;num*num<=n;num++) { // Remember this optimized, no sqrt divisibility syntax
        if(n%num==0) { // Divisiblity syntax
            ls.push_back(num);

            if(n/num != num) { // The two ifs will be one inside the other for a reason
                ls.push_back(n/num);
            }
        }
    }
    sort(ls.begin(),ls.end()); // Sorting the mixed according to divisor list

    for(auto it:ls) {
        cout << it << " "; // Remember this syntax of: auto printing a vector or list using iterator
    }
}

int main() { // You have to always do an int main() in every program where you take input in int main and call your fn
    int n;
    cin >> n;
    divisors_list(n);
}
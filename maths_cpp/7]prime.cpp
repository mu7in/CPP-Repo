#include<bits/stdc++.h>
using namespace std;

void checkprime(int n) {
    int div;
    int count=0;
    
    for(div=1;div*div<=n;div++) {
        if(n%div==0) {
            count++;
            if(n/div!=div) {
                count++;
            }
        }
    }
    if(count==2) cout << "Prime";
    else cout << "Not prime";

    /*do
    {
        for(div=1;div*div<=n;div++) {

        }
    } while (n!=1);*/
    
}

int main() {
    int input;
    cin >> input;
    checkprime(input);
}
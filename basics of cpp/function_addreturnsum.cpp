#include<iostream>
using namespace std;

int sum(int num1, int num2){
    int num3=num1+num2;
    return num3; //HEre the addition result is only returned, there is no instruction to print it. It is returned but it is not printed. So in the main function you will have to give print separately

    //In your user defined int fn, you always have to write return. In int main function, the return is automatically considered by VScode even if you dont write it
}

/*int main(){
    int add1, add2, result;
    cin >> add1 >> add2;
    sum(add1, add2);
    cout << sum << endl; // You cant print sum directly like this
}
*/

int main(){
    int add1, add2, result;
    cin >> add1 >> add2;
    result = sum(add1,add2); // THis is what you need to do in order to print the sum. Remember this syntax, this syntax of calling function as equal to a variable also works remember 
    cout << result << endl; // And then you print the variable you created and inside which you called the function. In order to print a function you follow this procedure

}

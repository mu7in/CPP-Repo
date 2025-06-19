#include<stdio.h>
int num;
// This code reads an integer from the user and prints it back to the console.

int main() {
    printf("Enter the number:\n");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}
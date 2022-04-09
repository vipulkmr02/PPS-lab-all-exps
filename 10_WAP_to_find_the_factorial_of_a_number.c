#include<stdio.h>

int main(){
    // declaring the fact variable for
    // storing the factorial and number will 
    // store user's input, i for 'for' loop
    int number, fact = 1, i;

    // asking the user for the number
    printf("Enter the number\n");
    scanf("%d", &number);

    // starting from 2 as multiplying 
    // with 1 will give the same 
    for (i = 2; i<=number;i++)
        fact *= i;

    printf("The factorial is %d.\n", fact);    
    return 0;
    }

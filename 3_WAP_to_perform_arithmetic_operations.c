#include<stdio.h>

int main(){
    // declaring two variables, on which the operations will be performed 
    int a, b;

    // asking the user to enter the values for the variables
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &a, &b);

    // performing the arithmetic operations
    int ADD = a + b;
    int MULTIPLY = a * b;
    int SUBTRACT = a - b;
    int DIVIDE = a / b;

    printf("ADD: %d\nSUBTRACT: %d\nMULTIPLY: %d\nDIVIDE: %d\n", ADD, SUBTRACT, MULTIPLY, DIVIDE);
    
    return 0;
    }

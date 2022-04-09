#include<stdio.h>

int main(){
    // initializing two variables, on which the operations will be performed 
    int a, b;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &a, &b);
    int ADD = a+b;
    int MULTIPLY = a*b;
    int SUBTRACT = a-b;
    int DIVIDE = a/b;
    printf("ADD: %d\nSUBTRACT: %d\nMULTIPLY: %d\nDIVIDE: %d\n", ADD, SUBTRACT, MULTIPLY, DIVIDE);
    return 0;
    }

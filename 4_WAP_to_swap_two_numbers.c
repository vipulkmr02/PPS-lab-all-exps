#include <stdio.h>

int main()
{
    // initializing the variables
    int a = 1, b = 10;
    printf("Before: %d %d\n", a, b);

    // swapping with a third variable
    // int temp = a;
    // a = b;
    // b = temp;

    // swapping without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After: %d %d\n", a, b);

    return 0;
}

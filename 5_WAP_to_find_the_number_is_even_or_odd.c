#include <stdio.h>

int main()
{
    // declaring the variable number
    int number;

    // taking input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // checking the number's divisibility with two
    // % operator returns the remainder of the dividend with the divisor
    // it is called the 'modulo' operator
    if (number % 2 == 0)
    {
        printf("%d is Even.\n", number);
    }
    else
    {
        printf("%d is Odd.\n", number);
    }

    return 0;
}

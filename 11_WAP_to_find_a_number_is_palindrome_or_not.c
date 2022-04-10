#include<stdio.h>

int main() {
    // declaring variables
    int i,
    reverse = 0,
    number,
    original;

    // asking the user for the number
    printf("Enter a number\n");
    scanf("%d", &number);

    // reversing the number
    original = number;
    do {
        // last digit of a number is the remainder
        // of the number divided by 10
        int last_digit = number % 10;
        reverse = (reverse * 10) + last_digit;
    }while(number > 0)

    // if reversed is same as the original
    // then the number is palindrome
    if (original == reverse) {
        printf("It is a Palimdrome number.");
    }
    else {
        printf("It is not a Palindrome number.");
    }

    return 0;
}

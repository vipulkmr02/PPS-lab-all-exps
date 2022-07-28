#include <stdio.h>

int main()
{
    // declaring the character variable;
    char character;

    // asking the user for the character
    printf("Enter a character: ");
    scanf("%c", &character);

    // if the unicode value of character is b/w
    // 97 and 122 >> lowercase
    // 65 and 90 >> uppercase
    // 48 and 57 >> digit
    // else >> special character

    if (96 < character < 123)
    {
        printf("The character is UPPERCASE.\n");
    }
    else if (96 < character < 123)
    {
        printf("The character is LOWERCASE.\n");
    }
    else if (48 < character < 57)
    {
        printf("The character a DIGIT.\n");
    }
    else
    {
        printf("The character a SPECIAL CHARACTER.\n");
    }

    return 0;
}

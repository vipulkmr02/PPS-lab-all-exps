#include <stdio.h>
#include <math.h>

int main()
{
    // declaring the co-efficient(s)
    int a, b, c;

    // asking the user for the co-efficient(s)
    printf("Enter the co-efficients: ");
    scanf("%d %d %d", &a, &b, &c);

    // calculating Determinant
    int d = sqrt(pow(b, 2) - (4 * a * c));

    // DETERMINANT       NATURE OF ROOTS

    // 0                 Equal
    // >0                Real and Distinct
    // <0                Complex

    if (d < 0)
    {
        printf("roots are Complex.");
    }
    else if (d == 0)
    {
        printf("roots are Equal");
    }
    else
    {
        printf("roots are Distinct and Real.");
    }

    printf("\n");
    return 0;
}

#include <stdio.h>

int main()
{
    // declaring three variables
    int p, q, r;

    // taking input from the user
    printf("Enter three numbers\n");
    scanf("%d %d %d", &p, &q, &r);

    // checking if the p > q 
    if (q < p)
    {
        // checking if the r < p  
        if (r < p)
        {
            printf("%d is greatest.\n", p);
        }
        // if false, then r > p
        // so r is greatest
        else
        {
            printf("%d is greatest.\n", r);
        }
    }
    // if false, then q > p
    else
    {
        // checking if q > r
        if (q > r)
        {
            printf("%d is greatest.\n", q);
        }
        else
        // if false, then r > q
        // so r is the greatest
        {
            printf("%d is greatest.\n", r);
        }
    }

    return 0;
}

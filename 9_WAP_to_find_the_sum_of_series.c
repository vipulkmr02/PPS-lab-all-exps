#include <stdio.h>
#include <math.h>

int main()
{
    // declaring the sum, m, n and i(for iteration) variable
    int i, m, n, sum = 0;

    // asking the user the value of m and n
    printf("Enter the value of m & n\n");
    scanf("%d %d", &m, &n);

    // using the for loop, to iterate from 1 to m
    // and adding the i^n to sum
    for (i = 1; i <= m; i++)
        sum += pow(i, n);

    printf("The sum of the series %d.\n", sum);
    return 0;
}

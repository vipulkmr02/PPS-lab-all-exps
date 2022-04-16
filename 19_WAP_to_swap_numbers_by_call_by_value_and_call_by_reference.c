#include <stdio.h>
int main()
{
    int a, b;
    printf("running...\n");
    scanf("%d %d", &a, &b);
    printf("before swap: %d %d\n", a, b);

    // call by reference
    int *p1 = &a, *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("swapped via call by reference: %d %d\n", a, b);

    // call by value
    temp = a;
    a = b;
    b = temp;
    printf("swapped via call by value: %d %d\n", a, b);

    return 0;
}

#include <stdio.h>

int main()
{
    // syntax of an array
    // variable[size] = {a,b,c};
    int i, array[10] = {17, 23, 34, 54, 12, 56, 31, 56, 56, 12};

    // sum of first two elements
    // 17 + 23
    int SUM = array[1] + array[0];
    // difference b/w 4th and 3rd element
    // 54 - 34
    int difference = array[3] - array[2];

    // printing the whole array 

    printf("SUM of first two elements of the array: %d\n", SUM);
    printf("difference b/w 4th and 3rd element of the array: %d\n", difference);

    return 0;
}

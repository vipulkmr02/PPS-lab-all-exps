#include <stdio.h>

int main()
{
    int i, length;

    // taking input in the array
    scanf("%d", &length);
    int array[length];

    for (i = 0; i < length; i++)
        scanf("%d", &array[i]);

    // Sorting begins here
    for (i = 1; i < length; i++)
    {
        int current = array[i], j = i - 1;

        while (j >= 0 && array[j] > current)
            array[j + 1] = array[j--];

        array[j + 1] = current;
    }

    // printing the array
    for (i = 0; i < length - 1; i++)
        printf("%d, ", array[i]);

    // last element
    printf("%d\n", array[length - 1]);

    return 0;
}

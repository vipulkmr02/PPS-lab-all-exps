#include <stdio.h>

int main()
{
    // printf("running...\n");

    int i, length;
    scanf("%d", &length);
    int array[length];

    for (i = 0; i < length; i++)
        scanf("%d", &array[i]);

    // sorting starts
    for (i = 0; i < length - 1; i++)
    {
        int min_index = i;
        // this loop is for finding the  minimum element.
        for (int j = i + 1; j < length; j++)
            if (array[min_index] > array[j])
                min_index = j;

        // values are swapped here
        int temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }

    // printing the array
    for (i = 0; i < length; i++)
        printf("%d ", array[i]);

    printf("\n");

    return 0;
}

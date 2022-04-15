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
    for (i = 1; i < length; i++)
    {
        int min_index, min = array[i];
        for (int j = i - 1; j < length; j++)
        {
            int element = array[j];
            // minimum element is found here.
            if (min > element)
            {
                min_index = j;
                min = element;
            }
        }

        // values are swapped here
        array[min_index] = array[i - 1];
        array[i - 1] = min;
    }

    // printing the array
    for (i = 0; i < length; i++)
        printf("%d ", array[i]);

    return 0;
}

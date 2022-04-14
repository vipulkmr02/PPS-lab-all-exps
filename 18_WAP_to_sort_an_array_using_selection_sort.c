#include <stdio.h>

int main()
{
    // printf("running...\n");

    int i, length;
    scanf("%d", &length);
    int array[length];

    for (i = 0; i < length; i++)
        scanf("%d", &array[i]);

    int min = array[0];

    for (i = 1; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            int element = array[j];
            if (min > element)
            {
                min = element;
            }
        }
        
        // while (j >= 0 && array[j] > current)
        // {
        //     array[j + 1] = array[j];
        //     j--;
        // }
        // array[j + 1] = current;



    }

    // printing the array
    for (i = 0; i < length; i++)
        printf("%d ", array[i]);

    return 0;
}

#include <stdio.h>

int main()
{

    // Bubble Sort is the simplest sorting algorithm that works
    // by repeatedly swapping the adjacent elements if they are in wrong order.

    // Example:
    // First Pass:
    // ( 5 1 4 2 8 ) –> ( 1 5 4 2 8 ), Here, algorithm compares
    // the first two elements, and swaps since 5 > 1.
    // ( 1 5 4 2 8 ) –>  ( 1 4 5 2 8 ), Swap since 5 > 4
    // ( 1 4 5 2 8 ) –>  ( 1 4 2 5 8 ), Swap since 5 > 2
    // ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 ), Now, since these elements are already in order
    // (8 > 5), algorithm does not swap them.

    // Second Pass:
    // ( 1 4 2 5 8 ) –> ( 1 4 2 5 8 )
    // ( 1 4 2 5 8 ) –> ( 1 2 4 5 8 ), Swap since 4 > 2
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –>  ( 1 2 4 5 8 )
    // Now, the array is already sorted, but our algorithm does not know
    // if it is completed. The algorithm needs one whole pass without any swap to know it is sorted.

    // Third Pass:
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )
    // ( 1 2 4 5 8 ) –> ( 1 2 4 5 8 )

    // taking input array
    int i, j, length;
    scanf("%d", &length);
    int array[length];

    for (i = 0; i < length; i++)
        scanf("%d", &array[i]);

    // sorting the array

    // this variable is for checking whether
    // all the elements are sorted or not
    for (j = 0; j < length - 1; j++)
    {
        for (i = 0; i < length - 1 - j; i++)
        {
            if (array[i] > array[i + 1])
            {
                // swap
                int tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
            }
        }
    }

    // printing the array
    for (i = 0; i < length; i++)
        printf("%d ", array[i]);

    printf("\n");
    return 0;
}

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionsort(int arr[], int n)
{
    // The way selection sort works is
    // it finds an element which is lesser
    // than teh selected element and thus we
    // swap them

    int j, i;

    for (i = 0; i < n - 1; i++)
    {
        int min_index = i;

        for (int j = i + 1; j < n; j++)
            if (arr[min_index] > arr[j])
                min_index = j;

        swap(&arr[min_index], &arr[i]);
    }
}

int main()
{
    int i, n;
    scanf("%d", &n);    

    int array[n];

    for (i = 0; i < n; i++)
        scanf("%d", &array[i]);

    selectionsort(array, n);

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    return 0;
}

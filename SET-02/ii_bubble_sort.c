// Bubble Sort
#include <stdio.h>

int main()
{
    int arr[100], size, x, y, swap;

    scanf("%d", &size);

    for (x = 0; x < size; x++)
        scanf("%d", &arr[x]);

    for (x = 0; x < size - 1; x++)
    {
        for (y = 0; y < size - x - 1; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                swap = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = swap;
            }
        }
    }

    for (x = 0; x < size; x++)
        printf("%d ", arr[x]);

    return 0;
}
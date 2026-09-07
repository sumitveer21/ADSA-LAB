// Selection Sort
#include <stdio.h>

int main()
{
    int arr[100], size, i, j, pos, temp;

    scanf("%d", &size);

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < size - 1; i++)
    {
        pos = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[pos])
                pos = j;
        }

        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
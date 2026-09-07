// Shell Sort
#include <stdio.h>

int main()
{
    int arr[100], size, i, j, step, temp;

    scanf("%d", &size);

    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for (step = size / 2; step > 0; step /= 2)
    {
        for (i = step; i < size; i++)
        {
            temp = arr[i];

            for (j = i; j >= step && arr[j - step] > temp; j -= step)
                arr[j] = arr[j - step];

            arr[j] = temp;
        }
    }

    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
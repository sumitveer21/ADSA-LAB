// Heap Sort
#include <stdio.h>

void heap(int arr[], int n, int i)
{
    int max = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    if (left < n && arr[left] > arr[max])
        max = left;

    if (right < n && arr[right] > arr[max])
        max = right;

    if (max != i)
    {
        temp = arr[i];
        arr[i] = arr[max];
        arr[max] = temp;

        heap(arr, n, max);
    }
}

void sort(int arr[], int n)
{
    int i, temp;

    for (i = n / 2 - 1; i >= 0; i--)
        heap(arr, n, i);

    for (i = n - 1; i > 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heap(arr, i, 0);
    }
}

int main()
{
    int arr[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, n);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
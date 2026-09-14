// Quick Sort
#include <stdio.h>

void sort(int arr[], int start, int end)
{
    int left = start, right = end;
    int pivot, temp;

    if (start >= end)
        return;

    pivot = arr[(start + end) / 2];

    while (left <= right)
    {
        while (arr[left] < pivot)
            left++;

        while (arr[right] > pivot)
            right--;

        if (left <= right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;
            right--;
        }
    }

    if (start < right)
        sort(arr, start, right);

    if (left < end)
        sort(arr, left, end);
}

int main()
{
    int arr[100], n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    sort(arr, 0, n - 1);

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
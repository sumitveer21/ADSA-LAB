// Merge Sort
#include <stdio.h>

void merge(int arr[], int start, int mid, int end)
{
    int temp[100];
    int i = start, j = mid + 1, k = start;

    while (i <= mid && j <= end)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= end)
        temp[k++] = arr[j++];

    for (i = start; i <= end; i++)
        arr[i] = temp[i];
}

void sort(int arr[], int start, int end)
{
    int mid;

    if (start < end)
    {
        mid = (start + end) / 2;

        sort(arr, start, mid);
        sort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
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
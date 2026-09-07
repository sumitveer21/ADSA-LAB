// Radix sort
#include <stdio.h>

int findMax(int arr[], int size) {
    int largest = arr[0], j;

    for (j = 1; j < size; j++)
        if (arr[j] > largest)
            largest = arr[j];

    return largest;
}

void digitSort(int arr[], int size, int place) {
    int result[100], freq[10] = {0};
    int j;

    for (j = 0; j < size; j++)
        freq[(arr[j] / place) % 10]++;

    for (j = 1; j < 10; j++)
        freq[j] += freq[j - 1];

    for (j = size - 1; j >= 0; j--) {
        result[freq[(arr[j] / place) % 10] - 1] = arr[j];
        freq[(arr[j] / place) % 10]--;
    }

    for (j = 0; j < size; j++)
        arr[j] = result[j];
}

void radixSort(int arr[], int size) {
    int largest = findMax(arr, size);
    int place;

    for (place = 1; largest / place > 0; place *= 10)
        digitSort(arr, size, place);
}

int main() {
    int arr[100], size, j;

    scanf("%d", &size);

    for (j = 0; j < size; j++)
        scanf("%d", &arr[j]);

    radixSort(arr, size);

    for (j = 0; j < size; j++)
        printf("%d ", arr[j]);

    return 0;
}
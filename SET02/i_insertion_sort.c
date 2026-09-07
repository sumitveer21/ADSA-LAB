// Insertion Sort
#include <stdio.h>

int main()
{
    int a[100], n, i, j, ch;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        ch = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > ch)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = ch;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

#include <stdio.h>

void arrValuePrint(int arr[], int n, int i)
{
    if (i == n)
        return;
    printf("%d ", arr[i]);
    arrValuePrint(arr, n, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

     int i;
    arrValuePrint(arr, n, i = 0);

    return 0;
}
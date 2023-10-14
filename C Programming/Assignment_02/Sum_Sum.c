#include <stdio.h>

int main()
{
    int n, pos = 0, neg = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos += arr[i];
        }
        else if (arr[i] < 0)
        {
            neg += arr[i];
        }
    }
    printf("%d ", pos);
    printf("%d", neg);

    return 0;
}
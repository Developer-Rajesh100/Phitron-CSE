#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n];
    for (int i = 0; i <= n; i++)
    {
        scanf(" %c", &a[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + (a[i] - '0');
    }

    printf("%d", sum);

    return 0;
}
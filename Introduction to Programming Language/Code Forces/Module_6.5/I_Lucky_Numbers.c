#include <stdio.h>

int main()
{
    int n, s;

    scanf("%d", &n);

    s = n % 10;
    n = n / 10;

    if (s % n == 0 || n % s == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
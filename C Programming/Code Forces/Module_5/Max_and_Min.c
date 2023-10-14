#include <stdio.h>

int main()
{
    long long int a, b, c;

    scanf("%lld %lld %lld", &a, &b, &c);

    // minimum
    if (a <= b && a <= c)
    {
        printf("%lld ", a);
    }
    else if (b <= a && b <= c)
    {
        printf("%lld ", b);
    }
    else
    {
        printf("%lld ", c);
    }
    // Maximum
    if (a >= b && a >= c)
    {
        printf("%lld\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%lld\n", b);
    }
    else
    {
        printf("%lld\n", c);
    }

    return 0;
}
#include <stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    x = x / 10;
    x = x / 10;
    x = x / 10;

    x % 2 == 0 ? printf("EVEN\n") : printf("ODD\n");

    return 0;
}
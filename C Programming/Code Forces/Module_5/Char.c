#include <stdio.h>

int main()
{
    char x;

    scanf("%c", &x);

    if (x >= 97 && x <= 122)
    {
        int lo = x - 32;
        printf("%c\n", lo);
    }

    else if (x >= 65 && x <= 90)
    {
        int up = x + 32;
        printf("%c\n", up);
    }

    return 0;
}
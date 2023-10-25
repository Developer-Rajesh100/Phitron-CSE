#include <stdio.h>
#include <string.h>

int main()
{
    char x[100], y[100];
    scanf("%s %s", x, y);

    int res = strcmp(x, y);

    res < 0 ? printf("%s\n", x) : printf("%s\n", y);

    return 0;
}
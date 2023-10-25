#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int res = strcmp(a, b);

    if (res == 0)
    {
        printf("A & B = Same\n");
    }

    else if (0 < res)
    {
        printf("B = Small\n");
    }

    else if (0 > res)
    {
        printf("A = Small\n");
    }

    return 0;
}
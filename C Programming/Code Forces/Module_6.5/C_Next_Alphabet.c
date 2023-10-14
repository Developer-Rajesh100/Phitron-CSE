#include <stdio.h>

int main()
{
    char c;
    int next;

    scanf("%c", &c);

    if (c == 'z')
    {
        printf("a");
        return 0;
    }

    next = c + 1;
    printf("%c\n", next);

    return 0;
}
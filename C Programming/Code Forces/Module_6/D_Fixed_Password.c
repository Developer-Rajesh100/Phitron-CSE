#include <stdio.h>

int main()
{
    int x;

    while (scanf("%d", &x) != EOF)
    {
        if (x == 1999)
        {
            printf("Correct\n");
            return 0;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}
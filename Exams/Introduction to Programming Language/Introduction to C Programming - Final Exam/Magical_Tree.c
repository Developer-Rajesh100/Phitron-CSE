#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);

    // Tree Head
    for (int i = 1; i <= 6 + (N / 2); i++)
    {
        for (int j = 1; j <= (6 + (N / 2)) - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Tree Body
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= N; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char x;

    scanf("%c", &x);

    if ((x >= 97 && x <= 122) || (x >= 65 && x <= 90))
    {
        printf("ALPHA\n");
        if (x >= 97 && x <= 122)
        {
            printf("IS SMALL\n");
        }
        else
        {
            printf("IS CAPITAL\n");
        }
    }
    else if (x >= 48 && x <= 57)
    {
        printf("IS DIGIT\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100000];
    scanf("%s", s);

    int cons = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != 97 && s[i] != 101 && s[i] != 105 && s[i] != 111 && s[i] != 117)
        {
            cons++;
        }
    }

    printf("%d", cons);

    return 0;
}
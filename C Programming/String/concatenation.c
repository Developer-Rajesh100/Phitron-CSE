#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    /*// Concatenation Using Custom Loop

    int k = strlen(a);

    for (int i = 0; i < strlen(b); i++)
    {
        a[k] = b[i];
        k++;
    }*/

    // Concatenation Using Builtin Funfion
    strcat(a, b);

    printf("%s %s\n", a, b);

    return 0;
}
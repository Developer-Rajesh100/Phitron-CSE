#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    char t[1000];

    scanf("%s %s", s, t);

    int a = strlen(s);
    int b = strlen(t);

    printf("%d %d\n%s %s", a, b, s, t);

    return 0;
}
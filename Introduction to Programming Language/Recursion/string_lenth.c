#include <stdio.h>

int stringLenth(char str[])
{
    int count = 0, i = 0;
    if (str[i] == '\0')
        return count;
    count = count + 1;
    i = i + 1;
    stringLenth(count);
}

int main()
{
    char str[100];
    scanf("%s", str);

    printf("%s\n", str);

    stringLenth(str);

    return 0;
}
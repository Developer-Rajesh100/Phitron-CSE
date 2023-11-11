#include <stdio.h>

void oneToFive(int i)
{
    if (i == 6)
        return;
    printf("%d\n", i);
    oneToFive(i + 1);
}

int main()
{
    oneToFive(1);

    return 0;
}
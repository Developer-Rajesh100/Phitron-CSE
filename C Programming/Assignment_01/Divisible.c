#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    n % 3 == 0 ? printf("YES") : printf("NO");

    return 0;
}

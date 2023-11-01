#include <stdio.h>

int main()
{
    int num = 14;

    int *numptr = &num;
    int *numptr2 = numptr;

    printf("%d\n", num);
    printf("%p\n", numptr);
    printf("%p\n", &num);
    printf("%d\n", *numptr);
    printf("%d\n", *numptr2);

    return 0;
}
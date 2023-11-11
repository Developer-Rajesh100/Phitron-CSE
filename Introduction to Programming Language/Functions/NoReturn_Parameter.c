#include <stdio.h>

// Function Declaration
void sumFunc(int num1, int num2);

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    sumFunc(num1, num2);

    return 0;
}

// Custom Function

void sumFunc(int num1, int num2)
{
    printf("The Sum Result is : %d\n", num1 + num2);
}
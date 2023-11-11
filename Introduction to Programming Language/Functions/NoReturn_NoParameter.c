#include <stdio.h>

// Function Declaration
void sumFunc();

int main()
{
    sumFunc();
    return 0;
}

// Custom Function
void sumFunc()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    printf("The Sum is : %d\n", num1 + num2);
}
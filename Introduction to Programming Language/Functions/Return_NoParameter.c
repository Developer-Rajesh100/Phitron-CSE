#include <stdio.h>

// Function Declaration
int sumFunc();

// Main Function
int main()
{

    printf("The Sum is : %d\n", sumFunc());
    return 0;
}

// Custom Function
int sumFunc()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum = num1 + num2;
    return sum;
}
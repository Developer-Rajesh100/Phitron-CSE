#include <stdio.h>

// Function Declaration
int sumFunc(int num1, int num2);
// {
//     int sum = num1 + num2;
//     return sum;
// }

// Main Function
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // int sum = sumFunc(num1, num2);

    printf("The Sum is: %d\n", sumFunc(num1, num2));

    return 0;
}

// Custom Function
int sumFunc(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
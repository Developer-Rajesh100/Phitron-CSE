// #include <stdio.h>

// void loveU(int n);

// int main()
// {
//     int n;
//     scanf("%d", &n);

//     loveU(n);

//     return 0;
// }

// void loveU(int n)
// {
//     int i = 0;
//     if (n == i)
//         return;

//     printf("I love Recursion\n");
//     loveU(i + 1);
// }

#include <stdio.h>

void loveU(int n);

int main()
{
    int n;
    scanf("%d", &n);

    loveU(n);

    return 0;
}

void loveU(int n)
{
    if (n == 0) // Base case: When n reaches 0
        return;

    printf("I love Recursion\n");
    loveU(n - 1); // Update to call with decremented value of n
}

#include <stdio.h>

// Function Declaration
int count_before_one(int ar[], int n);

// Main Function
int main()
{
    int n;
    scanf("%d", &n);

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("%d", count_before_one(ar, n));

    return 0;
}

// My Custom Functions
int count_before_one(int ar[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 1)
        {
            break;
            ;
        }
        count++;
    }
    return count;
}

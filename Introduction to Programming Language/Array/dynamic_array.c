#include <stdio.h>

int main()
{
    int numberOfArray;
    scanf("%d", &numberOfArray);

    int arr[numberOfArray];

    for (int i = 0; i < numberOfArray; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < numberOfArray; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
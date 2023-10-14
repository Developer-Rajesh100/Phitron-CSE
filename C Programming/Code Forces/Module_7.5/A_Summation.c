#include <stdio.h>

int main()
{
    long long int n, abslute = 0, sum = 0;
    scanf("%lld", &n);

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum = sum + arr[i];
    }

    if (sum > 0)
    {

        printf("%lld", sum);
    }
    else
    {

        printf("%lld", sum * (-1));
    }

    return 0;
}
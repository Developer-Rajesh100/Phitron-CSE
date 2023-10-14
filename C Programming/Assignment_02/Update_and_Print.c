#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);

    if (x >= 0 && x < n)
    {
        a[x] = v;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

/*

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int x, v;
    scanf("%d %d", &x, &v);

    if (x >= 0 && x < n) {
        a[x] = v; // Change the value at index x to v
    } else {
        printf("Invalid index\n");
        return 1;
    }

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}


*/
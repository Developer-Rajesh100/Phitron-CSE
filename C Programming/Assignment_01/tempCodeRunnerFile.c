#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    if (n >= 1000 && n < 1500)
    {
        printf("I will buy Punjabi");
    }
    else if (n >= 1500)
    {
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");
    }

    else
    {
        printf("Bad luck!");
    }

    return 0;
}

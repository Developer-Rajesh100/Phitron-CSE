#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);
        char S[N];
        scanf("%s", S);

        int tiger = 0;
        int pathan = 0;

        for (int i = 0; i < N; i++)
        {
            if (S[i] == 'T')
            {
                tiger++;
            }
            if (S[i] == 'P')
            {
                pathan++;
            }
        }

        if (tiger > pathan)
        {
            printf("Tiger\n");
        }
        else if (pathan > tiger)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}

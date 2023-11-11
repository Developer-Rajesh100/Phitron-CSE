#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {

        int N;
        scanf("%d", &N);
        int A[N];

        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        int B[N];
        for (int i = 0; i < N; i++)
        {
            B[i] = A[i];
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = i + 1; j < N; j++)
            {
                if (B[i] > B[j])
                {
                    int temp = B[i];
                    B[i] = B[j];
                    B[j] = temp;
                }
            }
        }

        int C[N];
        for (int i = 0; i < N; i++)
        {
            C[i] = A[i] - B[i];
        }

        for (int i = 0; i < N; i++)
        {
            int result = abs(C[i]);

            printf("%d ", result);
        }
        printf("\n");
    }

    return 0;
}
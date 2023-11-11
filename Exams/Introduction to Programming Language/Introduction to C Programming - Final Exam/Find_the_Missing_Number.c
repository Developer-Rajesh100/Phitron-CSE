// #include <stdio.h>

// int main()
// {
//     int T;
//     scanf("%d", &T);

//     while (T--)
//     {

//         long long int M;
//         int A, B, C;
//         scanf("%lld %d %d %d", &M, &A, &B, &C);
//         int D = A * B * C;

//         int missingNum = 0;
//         int flag = 0;

//         for (int i = 0; i <= M; i++)
//         {
//             if (D * i == M)
//             {
//                 missingNum = i;
//                 flag = 1;
//                 break;
//             }
//         }

//         flag == 1 ? printf("%d\n", missingNum) : printf("-1\n");
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        long long int M;
        int A, B, C;
        scanf("%lld %d %d %d", &M, &A, &B, &C);
        int D = A * B * C;

        M % D == 0 ? printf("%lld\n", M / D) : printf("-1\n");
    }

    return 0;
}

/*
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int M, A, B, C;
        scanf("%d %d %d %d", &M, &A, &B, &C);
        int D = A * B * C;

        int missingNum = -1;
        int flag = 0;

        for (int i = 0; i <= M; i++)
        {
            if (D * i == M)
            {
                missingNum = i;
                flag = 1;
                break; // A missing number is found, no need to continue the loop
            }
        }

        if (flag == 1)
        {
            printf("%d\n", missingNum);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
*/

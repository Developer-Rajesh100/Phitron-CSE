#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int single_farmer = m1 * d;
        int total_fermars = m1 + m2;
        int total_days = single_farmer / total_fermars;
        int days_saved = d - total_days;

        printf("%d\n", days_saved);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int ds1, t1, d1, ds2, t2, d2;
        int sum1 = 0, sum2 = 0;
        scanf("%d%d%d", &ds1, &t1, &d1);
        scanf("%d%d%d", &ds2, &t2, &d2);
        sum1 = ds1 + t1 + d1;
        sum2 = ds2 + t2 + d2;
        if (sum1 > sum2)
            printf("dragon\n");
        else if (sum2 > sum1)
            printf("sloth\n");
        else if (sum1 == sum2 && ds1 > ds2)
            printf("dragon\n");
        else if (sum1 == sum2 && ds1 < ds2)
            printf("sloth\n");
        else if (sum1 == sum2 && ds1 == ds2 && t1 > t2)
            printf("dragon\n");
        else if (sum1 == sum2 && ds1 == ds2 && t1 < t2)
            printf("sloth\n");
        else
            printf("tie\n");
    }
    return 0;
}
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, sum = 0, i, j = 0, b, r, m;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        for (i = 1; i < n; i++)
        {
            if (a[i] < a[j])
                j = i;
        }
        if (sum == pow(2, ceil(log2(sum))))
            printf("0\n");
        else
        {
            b = ceil(log2(sum));
            r = pow(2, b) - sum;
            m = (r + a[j]) / a[j];
            printf("1\n");
            printf("1 %d\n", m);
            printf("%d\n", j + 1);
        }
    }

    return 0;
}
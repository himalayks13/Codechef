#include <stdio.h>
int main()
{
    int t;
    while (t != 0)
    {
        int a[1000000], i, temp;
        unsigned long k, n;
        scanf("%lu %lu", n, k);
        for (i = 0; i < n; i++)
            a[i] = i + 1;
        while (k % 11 != 0)
        {
            for (i = 1; i <= n / 2; i++)
            {
                temp = a[i];
                a[i] = a[i * 2];
                a[n - 3 - i] = a[(i * 2) - 1];
            }
        }
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
        t--;
    }
}
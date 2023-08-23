#include <stdio.h>
#include <math.h>
int main()
{
    int t, c;
    scanf("%d", &t);
    for (c = 1; c <= t; c++)
    {
        int n, k, res;
        scanf("%d%d", &n, &k);
        int a[n], b[n];
        int i, j;
        for (i = 0; i < n; i++)
            a[i] = i + 1;
        if (n == 2 || n == 4 || n == 8 || n == 16 || n == 32 || n == 64 || n == 128 || n == 256 || n == 512 || n == 1024 || n == 2048 || n == 4096 || n == 8192 || n == 16384 || n == 32768 || n == 65536 || n == 131072)
        {
            res = (int)((log(n) / log(10)) / (log(2) / log(10)));
            k = k % res;
            while (k--)
            {
                j = 0;
                for (i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                    {
                        b[j] = a[i];
                        j++;
                    }
                    else
                        b[(n / 2) + j - 1] = a[i];
                }
                for (i = 0; i < n; i++)
                    a[i] = b[i];
            }
        }
        else
        {
            while (k--)
            {
                j = 0;
                for (i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                    {
                        b[j] = a[i];
                        j++;
                    }
                    else
                        b[(n / 2) + j - 1] = a[i];
                }
                for (i = 0; i < n; i++)
                    a[i] = b[i];
            }
        }
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
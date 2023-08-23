#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, i, j, temp;
        scanf("%d%d", &n, &x);
        int a[n];
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

        for (i = 0; i < (n - 1); i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        int sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += a[i];
            if (sum >= x)
                break;
        }
        if (sum >= x)
            printf("%d\n", i + 1);
        else
            printf("-1\n");
    }
    return 0;
}

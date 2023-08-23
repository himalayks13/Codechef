#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, i, a[3][3], count = 0;
        scanf("%d", &n);
        for (i = 0; i < 3; i++)
            scanf("%d %d %d\n", &a[i][0], &a[i][1], &a[i][2]);
        if (a[0][0] == n && a[1][1] == n && a[2][2] == n)
        {
            printf("%d\n", count);
            continue;
        }
        if ((a[0][2] + a[0][1] + a[1][2]) > (a[1][0] + a[2][0] + a[2][1]))
            printf("%d\n", a[0][2] + a[0][1] + a[1][2]);
        else
            printf("%d\n", a[1][0] + a[2][0] + a[2][1]);
    }
    return 0;
}
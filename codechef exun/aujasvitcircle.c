#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int m, x;
        scanf("%d %d ", &m, &x);
        m--;
        int arr[x];
        arr[0] = 1;
        int p;
        for (int i = 1; i < x; i++)
        {
            p = (m % (i + 1)) + 1;
            if (arr[i - 1] < p)
                arr[i] = arr[i - 1];
            else
                arr[i] = arr[i - 1] + 1;
        }
        for (int i = 0; i < x; i++)
            printf("%d ", arr[i]);
    }
    return 0;
}
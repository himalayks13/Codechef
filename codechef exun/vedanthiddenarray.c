#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n, a;
        scanf("%d %d", &n, &a);
        if (n == 1)
        {
            if (a % 2 == 0)
            {
                printf("even\n");
            }
            else
                printf("odd\n");
        }
        else if (a % 2 == 0)
        {
            printf("impossible\n");
        }
        else
        {
            if (n % 2 == 0)
            {
                printf("even\n");
            }
            else
                printf("odd\n");
        }
    }
    return 0;
}
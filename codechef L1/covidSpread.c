#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        unsigned long p, d, affect;
        scanf("%lu%lu", &p, &d);
        if (d <= 10)
        {
            affect = pow(2, d);
        }
        else
        {
            affect = 1024 * pow(3, (d - 10));
        }
        if (d > 26)
            printf("%lu\n", p);
        else if (affect <= p)
            printf("%lu\n", affect);
        else
            printf("%lu\n", p);
    }
    return 0;
}
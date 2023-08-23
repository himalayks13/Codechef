#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a1, b1, a2, b2, a3, b3, a, b, c, max = 0;
        scanf("%d %d", &a1, &b1);
        scanf("%d %d", &a2, &b2);
        scanf("%d %d", &a3, &b3);
        a = a1 + b1;
        b = a2 + b2;
        c = a3 + b3;
        max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
        printf("%d\n", max);
    }
    return 0;
}
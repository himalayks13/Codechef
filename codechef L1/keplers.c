#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d\n", &n);
    while (n != 0)
    {
        int n1, n2, n3, n4;
        scanf("%d %d %d %d\n", &n1, &n2, &n3, &n4);
        if ((pow(n1, 2) / pow(n3, 3)) == (pow(n2, 2) / pow(n4, 3)))
            printf("YES\n");
        else
            printf("NO\n");
        n--;
    }
    return 0;
}
#include <stdio.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        char s[100000];
        int cnt = 0;
        scanf("%s", &s);
        for (int i = 0; i <= strlen(s); i++)
        {
            if (s[i] == '1')
                cnt++;
        }

        if (cnt == 1 && s[strlen(s) - 1] == '1')
            printf("NO\n");
        else if (strlen(s) >= 2 && cnt >= 1)
            printf("YES\n");
        else
            printf("NO\n");

        t--;
    }
    return 0;
}
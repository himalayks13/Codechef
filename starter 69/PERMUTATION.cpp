#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* int n;
         int c = 0;
         cin >> n;
         int a[n];
         int sum = 0, s = ((n * (n + 1)) / 2);
         for (int i = 0; i < n; i++)
         {
             cin >> a[i];
             sum += a[i];
             if (a[i] == 0)
             {
                 c = 1;
             }
         }
         if (sum > s)
         {
             cout << "-1" << endl;
         }
         else if (sum >= s && c == 1)
         {
             cout << "-1" << endl;
         }
         else
         {
             cout << s - sum << endl;
         }*/
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != i + 1 && a[i] < i + 1)
            {
                c += i + 1 - a[i];
            }
            else if (a[i] > i + 1)
            {
                c = -1;
                break;
            }
        }
        cout << c << endl;
    }
    return 0;
}

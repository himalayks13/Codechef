#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            while (i < n - 1 && a[i] == a[i + 1])
                i++;
            c1++;
        }
        for (int i = 0; i < n; i++)
        {
            while (i < n - 1 && b[i] == b[i + 1])
                i++;
            c2++;
        }
        cout << c1 + c2 << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t, n, k, r;
    cin >> t;
    while (t--)
    {
        r = 1;
        cin >> n >> k;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            r = ((r * a[i]) % k);
        }
        if (r == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
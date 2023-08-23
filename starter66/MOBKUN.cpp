#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    while (w--)
    {
        int t, m, k, x;
        cin >> t >> m >> k >> x;
        if (x % ((t * k) + m) == 0)
        {
            cout << "YES" << endl;
        }
        else if (x % ((t * k) + m) - (t * (k - 1)) > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
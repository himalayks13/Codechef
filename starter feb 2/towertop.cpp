#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, m;
        cin >> x >> m;
        long long temp = 2, c = 0;
        while (temp <= x)
        {
            temp <<= 1;
            c++;
        }
        temp /= 2;
        long long r = c + 1;
        if (r > m)
        {
            cout << 0 << endl;
            continue;
        }
        if (temp == x)
        {
            cout << 1 + (m - r) << endl;
        }
        else
        {
            cout << m - r << endl;
        }
    }
}

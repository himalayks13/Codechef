#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, x, y, k;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k;
        if ((x - y) % k != 0)
            cout << (abs(x - y) / k) + 1 << endl;
        else
            cout << (abs(x - y) / k) << endl;
    }

    return 0;
}
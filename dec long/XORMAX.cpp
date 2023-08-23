#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int z, o;
        z = o = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '0')
                z++;
            else
                o++;
            if (b[i] == '0')
                z++;
            else
                o++;
        }
        int t = min(z, o);
        string ans = "";
        for (int i = 0; i < t; i++)
            ans += '1';
        for (int i = t; i < a.length(); i++)
            ans += '0';
        cout << ans << endl;
    }

    return 0;
}
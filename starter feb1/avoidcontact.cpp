#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, ans = 0;
        cin >> n >> c;
        if (n == c)
        {
            ans = (2 * c) - 1;
        }
        else
        {
            ans = (((2 * c) - 1) + (n - c + 1));
        }
        cout << ans << endl;
    }
    return 0;
}
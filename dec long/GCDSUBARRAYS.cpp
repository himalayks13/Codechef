
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, sum, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (k < (n * (n - 1)))
            cout << "-1" << endl;
        else
        {
            sum = (n * (n + 1) / 2) - 1;
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1 << " ";
            }
            cout << k - sum << endl;
        }
    }

    return 0;
}
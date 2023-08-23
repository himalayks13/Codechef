#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long x, a, b;
        cin >> x >> a >> b;
        if (x % a == 0)
        {
            long long div = x / a;
            long long d = b * div;
            long long sum = 0;
            for (int i = 1; i <= sqrt(d); i++)
            {
                if (sum > x)
                    break;
                if (d % i == 0)
                {
                    sum = sum + i;
                    if (d / i != i)
                        sum = sum + d / i;
                }
            }
            if (sum != x)
            {
                cout << -1 << endl;
            }
            else
                cout << d << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}

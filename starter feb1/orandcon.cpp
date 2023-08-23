#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long a = x, b = 0, c = x;
        for (long long i = 0; i < 32; i++)
        {
            if (!(c & ((long long)1 << i)))
            {
                c = c | ((long long)1 << i);
                break;
            }
        }
        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
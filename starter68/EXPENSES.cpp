#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, sum, rem;
        cin >> n >> x;
        sum = pow(2, x);
        for (int i = 0; i < n; i++)
        {
            sum = sum / 2;
        }
        cout << sum << endl;
    }
}
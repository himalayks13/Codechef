#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long int a[n];
        int c1 = 0, c2 = 0, start, end;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n < 3)
        {
            cout << "YES" << endl;
        }
        if (n == 3)
        {
            if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        if (n > 3)
        {
            if (a[0] == a[n - 1] || a[0] == a[n - 2] || a[1] == a[n - 1])
            {
                cout << "YES" << endl;
            }
            else
            {
                /*{
                    cout << "NO" << endl;
                }*/
                for (int i = 1; i < n; i++)
                {
                    if (a[i] == a[0])
                    {
                        c1++;
                    }
                    else
                    {
                        break;
                    }
                }
                for (int i = n - 2; i >= 0; i--)
                {
                    if (a[i] == a[n - 1])
                    {
                        c2++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (c1 >= c2)
                {
                    start = c1 + 1;
                    end = n - 1;
                }
                else
                {
                    start = 0;
                    end = n - 1 - c2 - 1;
                }
                if (a[start] == a[end])
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
}

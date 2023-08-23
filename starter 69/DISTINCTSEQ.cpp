#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        /* vector<pair<char, int>> p;
         for (int i = 0; i < 2 * n; i++)
         {
             p.push_back({s[i], i});
         }
         vector<int> r;
         sort(p.begin(), p.end());
         string a = "", b = "";
         for (int i = 0; i < 2 * n; i++)
         {
             if (i < n)
             {
                 a += p[i].first;
                 r.push_back(p[i].second);
             }
             else
             {
                 b += p[i].first;
             }
         }
         if (a == b)
         {
             cout << -1 << endl;
             continue;
         }
         else
         {
             sort(r.begin(), r.end());
             for (auto &x : r)
             {
                 cout << x << " ";
             }
             cout << endl;
         }*/
        int temp = 1;
        int i;
        for (i = 1; i < 2 * n; i++)
        {
            if (s[i] != s[0])
            {
                temp = 0;
                break;
            }
        }
        if (!temp)
        {
            cout << 1 << " ";
            int m = n - 1;
            int j = 2;
            while (m)
            {
                if (j == i + 1)
                {
                    m++;
                }
                else
                {
                    cout << j << " ";
                }
                j++;
                m--;
            }
        }
        else
            cout << -1;
        cout << endl;
    }
    return 0;
}
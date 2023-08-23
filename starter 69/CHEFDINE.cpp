#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /*int n, k;
        cin >> n >> k;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }*/
        /*vector<int> a;
        vector<pair<int, int>> b;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            a.push_back(k);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            b.push_back(make_pair(k, i));
        }
        sort (b.begin(),b.end());
        for(int i=0;i<)
        */
        long int n, k, sum = 0;
        cin >> n >> k;
        int a[n], b[n];
        unordered_set<int> s;
        vector<pair<int, int>> p;
        vector<int> r;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        if (s.size() < k)
        {
            cout << -1 << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            p.push_back({a[i], b[i]});
        }
        sort(p.begin(), p.end());
        r.push_back(p[0].second);
        for (int i = 1; i < p.size(); i++)
        {
            if (p[i].first == p[i - 1].first)
            {
                if (r[r.size() - 1] > p[i].second)
                {
                    r[r.size() - 1] = p[i].second;
                }
            }
            else
            {
                r.push_back(p[i].second);
            }
        }
        sort(r.begin(), r.end());
        for (int i = 0; i < k; i++)
        {
            sum += r[i];
        }
        cout << sum << endl;
    }
    return 0;
}

/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        string res = "";
        unordered_set<string> s;
        res = str[0];
        int l, maxi, sum;
        l = maxi = 0;
        sum = 1;
        for (int i = 0; i < n; i++)
        {
            if (str[i - 1] != str[i])
            {
                if (maxi < sum)
                {
                    maxi = sum;
                    maxi--;
                }
                if (s.find(res) != s.end())
                    l = max(l, sum);
                s.insert(res);
                res = str[i];
                sum = 1;
            }
            else
            {
                sum++;
                res += str[i];
            }
        }
        if (s.find(res) != s.end())
        {
            l = max(l, sum);
        }
        else
        {
            if (maxi < sum)
            {
                maxi = sum;
                maxi--;
            }
        }
        int ans = max(l, maxi);
        cout << ans << endl;
    }
}*/
#include <bits/stdc++.h>

using namespace std;
using all = long long int;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        all n;
        cin >> n;
        string s;
        cin >> s;
        map<pair<char, int>, int> f;
        char current = s[0];
        int len = 1;
        f[{current, len}]++;
        for (int i = 1; i < n; i++)
        {
            if (current != s[i])
            {
                len = 1;
                current = s[i];
            }
            else
            {
                len++;
            }
            f[{current, len}]++;
        }
        int maxi = 0;
        for (auto &t : f)
        {
            if (t.second == 1)
            {
                maxi = max(maxi, t.first.second - 1);
                continue;
            }
            maxi = max(maxi, t.first.second);
        }

        cout << maxi << endl;
    }
    return 0;
}
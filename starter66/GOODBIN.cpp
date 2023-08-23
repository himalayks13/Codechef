#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int l = s.length();
        if (s[0] == s[l - 1])
        {
            cout << l - 2 << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}

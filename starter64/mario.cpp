#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    string str, str1, str2;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        for (int i = 0; i < (n / 2); i++)
        {
            str1 += str[i];
        }
        for (int i = (n / 2); i < n; i++)
        {
            str2 += str[i];
        }
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (str1 == str2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        str1 = "";
        str2 = "";
    }
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int max = 0;
        for (int i = 0; i < str.length(); i++)
        {
            int count = 0;
            for (int j = i; j < str.length(); j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                }
            }

            if (count > max)
            {
                max = count;
            }
        }
        cout << max;
        if (str.length() > 2 && str.length() >= ((2 * max) - 1))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ds1, t1, d1, ds2, t2, d2;
        cin >> ds1 >> t1 >> d1;
        cin >> ds2 >> t2 >> d2;
        int a = ds1 + t1 + d1;
        int b = ds2 + t2 + d2;

        if (a > b || b == a && ds1 > ds2 || b == a && ds1 == ds2 && t1 > t2)
        {
            cout << "Dragon" << endl;
        }
        else if (b > a || b == a && ds1 < ds2 || b == a && ds1 == ds2 && t1 < t2)
        {
            cout << "Sloth" << endl;
        }
        else
            cout << "Tie" << endl;
    }

    return 0;
}
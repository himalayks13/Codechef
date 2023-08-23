#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(arr[i], result);

        if (result == 1)
        {
            return 1;
        }
    }
    return result;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 0;
        int g;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        /*sort(a, a + n);
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[0])
            {
                continue;
            }
            else if (a[i] % a[0] == 0)
            {
                count = count + 1;
            }
            else
            {
                count = count + 1;
            }
        }*/
        // cout << findGCD(a, n) << endl;
        g = findGCD(a, n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == g)
            {
                count++;
            }
        }
        cout << n - count << endl;
        /*if (findGCD(a, n) == 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << count << endl;
        }*/
    }
}
/*int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int count = 0, var = 0, min = 999;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (min > a[i])
            {
                min = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != min)
            {
                if (a[i] % min == 0)
                {
                    count++;
                }
                else
                {
                    var = 1;
                    break;
                }
            }
        }
        if (var == 1)
        {
            cout << n << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
}*/

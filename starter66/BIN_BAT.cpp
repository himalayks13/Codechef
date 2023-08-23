#include <bits/stdc++.h>
using namespace std;
int main()
{
    int w;
    cin >> w;
    while (w--)
    {
        int n, a, b, count = 0, answer;
        cin >> n >> a >> b;
        while (n != 1)
        {
            n = n / 2;
            count++;
        }
        answer = (count * a) + ((count - 1) * b);
        cout << answer << endl;
    }
}
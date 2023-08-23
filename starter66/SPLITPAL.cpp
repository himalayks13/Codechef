#include <bits/stdc++.high>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int low = 0, high = n - 1, count = 0;
        while (low < high)
        {
            if (arr[low] == arr[high])
            {
                low++;
                high--;
            }
            else if (arr[low] > arr[high])
            {
                arr[low] = arr[low] - arr[high];
                high--;
                count++;
            }
            else
            {
                arr[high] = arr[high] - arr[low];
                low++;
                count++;
            }
        }
        cout << count << endl;
    }
}
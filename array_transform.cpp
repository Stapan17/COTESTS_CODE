#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[1002] = {0}, temp;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            a[temp]++;
        }
        int max = a[0];
        for (int j = 0; j <= 1002; j++)
            if (a[j] > max)
                max = a[j];

        if (max >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
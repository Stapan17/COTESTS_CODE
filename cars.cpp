#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;

    while (t--)
    {
        long int n;
        cin >> n;

        long int a[n], sum = 0;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n, greater<int>());

        for (int i = 0; i < n; ++i)
        {
            if ((a[i] - (i)) >= 0)
            {
                a[i] = a[i] - i;
            }
            else
            {
                a[i] = 0;
            }
            sum = sum + a[i];
        }

        cout << (sum) % (1000000007) << endl;
    }
    return 0;
}

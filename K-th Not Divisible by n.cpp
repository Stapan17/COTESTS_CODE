#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, k, cnt = 0;
        cin >> n >> k;
        cout << k + ((k - 1) / (n - 1)) << endl;
    }
    return 0;
}
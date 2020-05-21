#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n < 4)
        cout << -1;
    else if (n == 4)
        cout << "3 1 4 2";

    else if (n == 5)
        cout << "5 3 1 4 2";

    else if (n % 2 == 0)
    {
        for (int i = n; i > 0; i = i - 2)
            cout << i << "  ";
        cout << "5  1  3  ";

        for (int i = 7; i < n; i = i + 2)
            cout << i << "  ";
    }

    else
    {
        for (int i = n; i > 0; i = i - 2)
            cout << i << "  ";
        cout << "4  2  6  ";

        for (int i = 8; i < n; i = i + 2)
            cout << i << "  ";
    }
    cout << endl;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
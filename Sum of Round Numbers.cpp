#include <bits/stdc++.h>
using namespace std;

int powx(int x)
{
    int result = 1;
    for (int i = 0; i < x; i++)
        result *= 10;
    return result;
};

void solve()
{
    int n, j = 0, a[6] = {0}, x, y;
    cin >> n;
    string s = to_string(n);
    if (n <= 10)
    {
        cout << 1 << endl;
        cout << n << endl;
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != '0')
            {
                y = powx(s.length() - 1 - i);
                x = (s[i] - 48) * y;
                a[j] = x;
                j++;
                // cout << s[i] - 48 << "  " << x << "  " << y << endl;
            }
            else
            {
                continue;
            }
        }
        cout << j << endl;
        for (int i = 0; i < j; i++)
            cout << a[i] << "  ";
    }
}

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
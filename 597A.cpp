#include <bits/stdc++.h>

using namespace std;

#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define Debug(x) cout << #x " = " << (x) << endl
#define SORT(a) sort(a.begin(), a.end())
#define SORTR(a) sort(a.rbegin(), a.rend())
#define mod 1000000007
#define PI 3.141592653589793238
int main()
{
    IOS;

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int x = max(a, b);

        int y[11000] = {0};
        y[0] = 1;
        for (int i = 0; i < 11000; i++)
        {
            if (i >= a && y[i - a] == 1)
                y[i] = 1;
            if (i >= b && y[i - b] == 1)
                y[i] = 1;
        }

        int c = 0;
        for (int i = x + 500; i < x + 1000; i++)
        {
            if (y[i] == 0)
            {
                c = 1;
                break;
            }
        }

        if (c == 1)
            cout << "Infinite" << endl;
        else
            cout << "Finite" << endl;
    }

    return 0;
}
// 0 black
// 1 white
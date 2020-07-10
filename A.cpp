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

    int n, m, k;
    cin >> n >> m >> k;

    int a[n][m] = {0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = 0;

    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;

        x -= 1;
        y -= 1;

        a[x][y] = 1;
    }

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m - 1; j++)
        {
            if ((a[i][j]) == 0)
            {
                if ((j == m - 1) && (i != n - 1))
                {
                    if (a[i + 1][j] == 0)
                    {
                        continue;
                    }
                    else
                    {
                        c = 1;
                        break;
                    }
                }
                else
                {
                    if ((a[i + 1][j] == 1) && (a[i][j + 1] == 1))
                    {
                        c = 1;
                        break;
                    }
                }
            }
        }

        if (c == 1)
            break;
    }

    if (c == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

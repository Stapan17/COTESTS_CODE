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

void solve()
{
    int n, k, d, mini = 100000;
    cin >> n >> k >> d;

    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        a.pb(x);
    }

    for (int i = 0; i <= n - d; i++)
    {
        set<int> s;
        for (int j = i; j < (i + d); j++)
        {
            s.insert(a[j]);
        }

        if (s.size() == 1)
        {
            mini = 1;
            break;
        }

        if (s.size() < mini)
            mini = s.size();
    }

    cout << mini << endl;
}

int main()
{
    IOS;

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

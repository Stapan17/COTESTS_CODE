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

    vector<pair<int, int>> a;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        s.insert(x);
        a.pb(mp(x, s.size()));
    }

    int x = d - 1, p = 0, L = 0, R = 0;
    for (int i = 0; i <= n - d; i++)
    {

        int l = a[i].second;
        int r = a[i + x].second;

        if (r == l)
            p = a[i].second;
        else
            p = (r - l) + 1;

        if (p <= mini)
        {
            mini = p;
            L = i;
            R = i + x;
        }
    }

    set<int> q;
    for (int i = L; i <= R; i++)
    {
        q.insert(a[i].first);
    }

    cout << q.size() << endl;
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

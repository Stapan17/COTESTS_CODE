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
        int n;
        cin >> n;

        vector<int> a;
        set<int> s;
        for (int i = 0; i < 2 * n; i++)
        {
            int x;
            cin >> x;

            int p = s.size();
            s.insert(x);
            int q = s.size();

            if (p != q)
            {
                a.push_back(x);
            }
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}

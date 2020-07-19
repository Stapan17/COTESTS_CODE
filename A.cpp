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
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];

        SORT(a);
        if (a[0] != a[1] && a[1] != a[2])
        {
            cout << "NO" << endl;
        }
        else if (a[0] == a[1] && a[1] != a[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            if (a[0] == a[1] && a[1] == a[2])
                cout << a[0] << " " << a[0] << " " << a[0] << endl;
            else
                cout << a[0] << " " << a[0] << " " << a[1] << endl;
        }
    }

    return 0;
}

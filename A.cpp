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

    int da, db;
    cin >> da >> db;

    if (da == 9 && db == 1)
    {
        cout << da << " " << db << "0" << endl;
    }
    else
    {
        if (da == db)
        {
            cout << da << "99771"
                 << " " << db << "99772" << endl;
        }

        else if ((db - da) == 1)
        {
            cout << da << "9999"
                 << " " << db << "0000" << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}

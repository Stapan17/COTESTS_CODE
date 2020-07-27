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

int main()
{
    IOS;

    string s;
    cin >> s;

    int n = s.length();
    vector<char> a;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            continue;
        }
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] += 32;
        }
        if (s[i] >= 97 && s[i] <= 122)
        {
            a.pb('.');
        }
        a.pb(s[i]);
    }

    for (int i = 0; i < a.size(); i++)
        cout << a[i];
    cout << endl;
    return 0;
}

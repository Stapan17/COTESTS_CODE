#include <bits/stdc++.h>

using namespace std;

#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define pb push_back
#define mp make_pair
#define Debug(x) cout << #x " = " << (x) << endl

int main()
{
    IOS;

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int x = 0, n = s.length(), z = 0, o = 0;
        int y = 10;

        while (y--)
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                    z++;
                else if (s[i] == '1')
                    o++;
            }
            int maxi = max(z, o);
            if (maxi == n)
                break;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    int j = i + 1;
                    while ((s[j] == '9') && (j < s.length()))
                    {
                        j++;
                    }
                    if (s[i] != s[j])
                    {
                        x++;
                        s[i] = '9';
                        s[j] = '9';
                    }
                }
                else if (s[i] == '1')
                {
                    int j = i + 1;
                    while ((s[j] == '9') && (j < s.length()))
                    {
                        j++;
                    }
                    if (s[i] != s[j])
                    {
                        x++;
                        s[i] = '9';
                        s[j] = '9';
                    }
                }
            }
            n -= 2;
        }
        if (x % 2 == 0)
            cout << "NET" << endl;
        else
            cout << "DA" << endl;
    }

    return 0;
}

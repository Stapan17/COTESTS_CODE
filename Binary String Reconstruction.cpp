// #include <bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n0, n1, n2;
//     cin >> n0 >> n1 >> n2;

//     int c[(n0 + n1 + n2) + 1] = {0}, j = 0;
//     if (n0 != 0)
//     {
//         for (int i = 0; i <= n0; i++)
//         {
//             c[i] = 0;
//             j++;
//         }
//     }
//     if (n1 != 0)
//     {
//         for (int i = 0; i < n1; i++)
//         {
//             c[j] = 1;
//             j++;
//         }
//     }
//     for (int i = 0; i < j; i++)
//         cout << c[i];
// }
// // 0101
// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n0, n1, n2;
        cin >> n0 >> n1 >> n2;
        if (n1 == 0)
        {
            if (n0 != 0)
            {
                cout << string(n0 + 1, '0') << endl;
            }
            else
            {
                cout << string(n2 + 1, '1') << endl;
            }
            continue;
        }
        string ans;
        for (int i = 0; i < n1 + 1; ++i)
        {
            if (i & 1)
                ans += "0";
            else
                ans += "1";
        }
        ans.insert(1, string(n0, '0'));
        ans.insert(0, string(n2, '1'));
        cout << ans << endl;
    }
}
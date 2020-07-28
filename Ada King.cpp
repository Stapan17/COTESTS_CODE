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

char a[8][8];

void Num()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            a[i][j] = 'X';
        }
    }
}

void Print()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
//XX
void Solve()
{
    int k;
    cin >> k;

    Num();

    a[0][0] = 'O';

    if (k <= 7)
    {
        for (int i = 1; i < k; i++)
        {
            a[0][i] = '.';
        }
        k = 0;
    }
    else
    {
        k -= 7;
        for (int i = 1; i < 8; i++)
        {
            a[0][i] = '.';
        }
    }

    for (int i = 1; i < 8; i++)
    {
        if (k <= 8)
        {
            for (int j = 0; j < k; j++)
                a[i][j] = '.';
            break;
        }
        else
        {
            k -= 8;
            for (int j = 0; j < 8; j++)
                a[i][j] = '.';
        }
    }

    Print();
    cout << endl;
}

int main()
{
    IOS;

    int t;
    cin >> t;

    while (t--)
    {
        Solve();
    }

    return 0;
}

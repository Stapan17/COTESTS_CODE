#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    int y = 1, total = 0;
    while (total < n)
    {
        total = 3 * y - 1 + total;
        y++;
    }
    return total;
};

void solve()
{
    int n, count = 0;
    cin >> n;
    int x = sum(n);
    cout << x << endl;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

/*
2  7  15  26  40
1  1   1   1   1 
5  8 11 14  17  21 

for(int i=2;i<n;i=1+3)
{
    a[i]=1;

}
n = number of cards

*/
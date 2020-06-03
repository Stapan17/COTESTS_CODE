#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    while (n > 0 && m > 0 && (n + m) >= 3)
    {
        if (n == m)
        {
            count = count + (n + m) / 3;
            break;
        }
        else if (n > m)
        {
            n = n - 2;
            m = m - 1;
        }
        else
        {
            n = n - 1;
            m = m - 2;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}
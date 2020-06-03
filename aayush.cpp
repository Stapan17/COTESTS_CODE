#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    long long int a[n], b[q];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < q; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
            cout << a[i] << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
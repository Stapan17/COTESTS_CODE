#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a, b, c, s = 0, dif = 0, dif1 = 0;
        cin >> n >> a >> b >> c;

        long long int x[n];
        for (int i = 0; i < n; i++)
            cin >> x[i];
        dif = abs(b - x[0]);
        dif1 = abs(a - x[0]);
        for (int i = 0; i < n; i++)
        {
            if (abs(b - x[i]) <= dif && abs(a - x[i]) < dif1)
                dif = abs(b - x[i]);
        }
        s = abs(dif + c + b + dif - a);

        cout << s << endl;
    }
    return 0;
}
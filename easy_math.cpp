#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum1 = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int m;
                m = a[i] * a[j];

                int sum = 0, x = 0;
                while (m > 0)
                {
                    x = m % 10;
                    sum = sum + x;
                    m = m / 10;
                }

                if (sum > sum1)
                {
                    sum1 = sum;
                }
            }
        }

        cout << sum1 << "\n";
    }
    return 0;
}

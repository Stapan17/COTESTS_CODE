#include <bits/stdc++.h>
using namespace std;

double nthRoot(int A, int N)
{
    double xPre = rand() % 10;
    double eps = 1e-3;
    double delX = INT_MAX;
    double xK;

    while (delX > eps)
    {
        xK = ((N - 1.0) * xPre +
              (double)A / pow(xPre, N - 1)) /
             (double)N;
        delX = abs(xK - xPre);
        xPre = xK;
    }

    return xK;
}

int main()
{
    long long int N, A;

    int n, k;
    cin >> n >> k;

    vector<long int> a;
    for (int i = 0; i < n; i++)
    {
        long int x;
        cin >> x;

        a.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            A = a[i] * a[j];
            double x = nthRoot(A, k);
            long long int p = (int)x;

            int q = pow(p, k);

            if (A == q)
                cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}

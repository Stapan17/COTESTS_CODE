#include <iostream>
using namespace std;
int main()
{
    int i, n, a[1000];
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = n - 1; i >= 0; i--)
        printf("%d ", a[i]);
    return 0;
}
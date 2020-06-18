#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int l, r, count = 0;
        cin >> l >> r;

        for (int i = l; i <= r; i++)
        {
            int z = i % 10;

            if (z == 2 || z == 3 || z == 9)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
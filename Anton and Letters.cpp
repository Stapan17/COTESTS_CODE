#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int a[26] = {0}, count = 0;

    for (int i = 1; i < s.length(); i = i + 3)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            a[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
            count++;
    }
    cout << count << endl;
    return 0;
}
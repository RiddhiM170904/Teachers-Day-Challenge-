#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    if (!(cin >> s))
        return 0;

    int pos = 0;
    int total = 0;

    for (char ch : s)
    {
        int target = ch - 'a';
        int diff = abs(target - pos);
        total += min(diff, 26 - diff);
        pos = target;
    }

    cout << total << '\n';
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> need(n);
    for (int i = 0; i < n; i++)
        cin >> need[i];

    int last = 0;
    for (int i = 0; i < n; i++)
    {
        int rounds = (need[i] + m - 1) / m;
        if (rounds >= (need[last] + m - 1) / m)
        {
            last = i;
        }
    }

    cout << last + 1 << endl;
    return 0;
}
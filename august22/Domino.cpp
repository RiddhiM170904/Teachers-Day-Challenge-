#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int su = 0, sl = 0, odd = 0;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        su += x;
        sl += y;
        if ((x % 2) != (y % 2))
            odd = 1;
    }
    if (su % 2 == 0 && sl % 2 == 0)
        cout << 0;
    else if (su % 2 && sl % 2 && odd)
        cout << 1;
    else
        cout << -1;
}
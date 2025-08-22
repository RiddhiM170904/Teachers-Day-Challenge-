#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int mx = max({x, y, z});
        if ((x == mx && y == mx) || (x == mx && z == mx) || (y == mx && z == mx))
        {
            cout << "YES\n";
            if (x == mx && y == mx)
                cout << mx << " " << z << " " << z << "\n";
            else if (x == mx && z == mx)
                cout << y << " " << y << " " << mx << "\n";
            else
                cout << x << " " << mx << " " << x << "\n";
        }
        else
            cout << "NO\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int total_drink_toasts = (k * l) / nl;
    int total_lime_toasts = c * d;
    int total_salt_toasts = p / np;

    int max_toasts_per_friend = min({total_drink_toasts, total_lime_toasts, total_salt_toasts}) / n;

    cout << max_toasts_per_friend << "\n";
    return 0;
}
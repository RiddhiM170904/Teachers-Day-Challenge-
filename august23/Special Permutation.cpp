#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n, x; cin >> n >> x;
        vector<int> a(n);
        long long s = 0;
        for (int i = 0; i < n; i++) cin >> a[i], s += a[i];
        if (s % x != 0) {
            cout << n << "\n";
            continue;
        }
        int l = -1, r = -1;
        for (int i = 0; i < n; i++) if (a[i] % x != 0) { l = i; break; }
        for (int i = n - 1; i >= 0; i--) if (a[i] % x != 0) { r = i; break; }
        if (l == -1) cout << -1 << "\n";
        else cout << n - min(l + 1, n - r) << "\n";
    }
}
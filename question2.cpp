#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        sort(a.begin(), a.end());

        int pathSum = 0;
        for (int i = 0; i < n; ++i) {
            pathSum += a[i];
        }

        if (pathSum == s) {
            
            if (n >= 2) swap(a[n - 1], a[n - 2]);
            
            pathSum = 0;
            for (int i = 0; i < n; ++i) pathSum += a[i];
            if (accumulate(a.begin(), a.end(), 0) == s) {
                cout << -1 << '\n';
                continue;
            }
        }

        for (int x : a) cout << x << " ";
        cout << '\n';
    }

    return 0;
}

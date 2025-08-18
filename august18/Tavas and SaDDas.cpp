#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    if (!(cin >> s)) return 0;
    long long L = s.size(), v = 0;
    for (char c : s) v = v * 2 + (c == '7');
    long long ans = ((1LL << L) - 2) + v + 1;
    cout << ans;
    return 0;
}

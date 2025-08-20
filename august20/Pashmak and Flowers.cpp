#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (auto &x : a) cin >> x;
    long long mn = *min_element(a.begin(), a.end());
    long long mx = *max_element(a.begin(), a.end());
    long long d = mx - mn;
    long long c1 = count(a.begin(), a.end(), mn);
    long long c2 = count(a.begin(), a.end(), mx);
    long long w = (mn == mx ? n * (n - 1) / 2 : c1 * c2);
    cout << d << " " << w;
}

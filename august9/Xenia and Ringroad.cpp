#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    long long time = 0;
    int current = 1;
    
    for (int i = 0; i < m; i++) {
        int target = a[i];
        if (target >= current) {
            time += target - current;
        } else {
            time += n - current + target;
        }
        current = target;
    }
    
    cout << time << endl;
    return 0;
}
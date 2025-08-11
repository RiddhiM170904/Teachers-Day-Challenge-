#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int left = 0, right = n - 1;
    int s1 = 0, s2 = 0;
    
    for (int i = 0; i < n; i++) {
        if (a[left] > a[right]) {
            if (i % 2 == 0) s1 += a[left++];
            else s2 += a[left++];
        } else {
            if (i % 2 == 0) s1 += a[right--];
            else s2 += a[right--];
        }
    }
    
    cout << s1 << " " << s2 << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int y = n / 7, ans4 = -1, ans7 = -1;
    for (int i = y; i >= 0; i--) {
        int r = n - i * 7;
        if (r % 4 == 0) {
            ans7 = i;
            ans4 = r / 4;
            break;
        }
    }
    if (ans4 == -1) cout << -1;
    else cout << string(ans4, '4') + string(ans7, '7');
}

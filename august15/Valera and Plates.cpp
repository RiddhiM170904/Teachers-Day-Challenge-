#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    int a, wash = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == 1) {
            if (m > 0) m--;
            else wash++;
        } else {
            if (k > 0) k--;
            else if (m > 0) m--;
            else wash++;
        }
    }
    cout << wash;
}

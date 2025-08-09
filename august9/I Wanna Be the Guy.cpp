#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p;
    cin >> p;
    vector<int>a;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    int q;
    cin >> q;
    vector<int>b;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        b.push_back(y);
    }   

    unordered_map<int, int>up;
    for(int i : a) {
        up[i]++;
    }
    for(int i : b) {
        up[i]++;
    }

    if(up.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}
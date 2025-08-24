#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    unordered_map<string,int> m;
    while(n--){
        string s; cin >> s;
        if(!m.count(s)){
            m[s]=0; cout<<"OK\n";
        }else{
            m[s]++;
            cout<<s<<m[s]<<"\n";
        }
    }
}
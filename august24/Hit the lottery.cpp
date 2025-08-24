#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n; cin >> n;
    int d[5]={100,20,10,5,1}, c=0;
    for(int i=0;i<5;i++){c+=n/d[i];n%=d[i];}
    cout<<c;
}
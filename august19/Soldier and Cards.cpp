#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k1,k2,x;
    cin>>n>>k1;
    queue<int>a,b;
    for(int i=0;i<k1;i++){ cin>>x; a.push(x); }
    cin>>k2;
    for(int i=0;i<k2;i++){ cin>>x; b.push(x); }
    int cnt=0,lim=100000; 
    while(!a.empty() && !b.empty() && cnt<lim){
        int u=a.front(); a.pop();
        int v=b.front(); b.pop();
        if(u>v){ a.push(v); a.push(u); }
        else{ b.push(u); b.push(v); }
        cnt++;
    }
    if(cnt>=lim) cout<<-1;
    else cout<<cnt<<" "<<(a.empty()?2:1);
}
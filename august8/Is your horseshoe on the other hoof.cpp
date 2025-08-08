#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> ans;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        ans.push_back(x);
    }
    unordered_map<int,int> m;
    for(int i : ans){
        m[i]++;
    }
    if(m.size()>4){
        cout<<0<<endl;
    }
    else{
        cout<<4 - m.size()<<endl;
    }

}
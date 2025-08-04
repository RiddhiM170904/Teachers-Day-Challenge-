#include <bits/stdc++.h>
using namespace std;
string abbreviate(string s) {
    int n = s.size();
    if(n<=10){
        return s;

    }else{
        string abb;
        abb = abb + s[0];
        abb =  abb + to_string(n-2);
        abb = abb + s[n-1];
        return abb;
    }
    return s;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        cout<<abbreviate(s)<<endl;
    }

    return 0;
}
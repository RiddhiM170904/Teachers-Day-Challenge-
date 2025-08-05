#include <bits/stdc++.h> 
using namespace std;

int main( ){
    int c;
    string s;
    cin>>c>>s;
    int count=0;
    for(int i=1;i<c;i++){
        if(s[i]==s[i-1]){
            count++;
        }
    }
    cout<<count<<endl;
}
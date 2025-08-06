#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cin>>s;
    if(s.size() < 7){
        cout<<"NO"<<endl;
        
    }
    else{
        if(s.find("0000000")!= string::npos || s.find("1111111") != string::npos){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}
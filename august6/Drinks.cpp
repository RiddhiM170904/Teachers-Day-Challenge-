#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    float d = 100;
    float total = n;
    float sum = 0;
    for(int i =0;i<n;i++){
        float a = v[i]/d;
        sum=sum + a;
    }
    cout<<(sum*100)/total<<endl;
}
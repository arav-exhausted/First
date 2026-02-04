#include <bits/stdc++.h>
using namespace std;

#define ll long long

int freq(int n, vector<ll> v){
    int count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==n) count++;
    }
    return count;
}

int main() {

    int t;
    cin>>t;
    while(t--){
        ll n,neg,pos,k=0;
        cin>>n;
        vector<ll> a(n);
        for(auto &c:a){
            cin>>c;
        }
        neg= freq(-1,a);
        pos = freq(1,a);
        

        while(neg>pos || neg%2==1){
            k++;
            pos++;
            neg--;
        }

        cout<<k<<endl;
    }
    return 0;
}
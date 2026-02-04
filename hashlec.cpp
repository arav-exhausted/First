#include <bits/stdc++.h>
using namespace std;

int main() {
    //solving the problem of 1e9 + length array

    // using a unordered map


    // in hashing the number is the key and the frewuency is the value in this mapp
    // unordered map is first priority cuz it has 0(1) TC in mean and avg case and 0(n) in worst case[wich is less likely to happen]

    int n;
    cin>>n;

    int arr[n];
    for(int &c:arr){
        cin>>c;
    }
    //pre-compute

    map<int,int> mpp;

    for(int i=0;i<n;i++){
        mpp[arr[i]]++;

    }
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;

        // fetch7
        cout<<mpp[num]<<endl;
    }

    
    return 0;
}
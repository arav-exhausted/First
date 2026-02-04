#include <bits/stdc++.h>
using namespace std;



bool binary_search(vector<int> &arr,int num,int low,int high){



    if(low>high) return false;

    int mid = low + (high - low) / 2;

    if(num==arr[mid]) return true;

    if(num<arr[mid]){
        return binary_search(arr,num,low,mid-1);
    }
    
    if(num>arr[mid]){
        return binary_search(arr,num,mid+1,high);
    }

    return false;



}



int main() {

    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int num;
    cin>>num;

    if(binary_search(arr,num,0,n-1)){
        cout<<"Found";
    }
    else cout<<"Not Found";

    return 0;


}
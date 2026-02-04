#include <bits/stdc++.h>
using namespace std;



int lowerbound(vector<int>&v,int element){
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi - lo > 1){
        mid=(hi+lo)/2;
        if(v[mid]<element){
            lo=mid+1;
        }else{
            hi =mid;
        }
    }
    if(v[lo]>=element){
            return lo;
        }
        if(v[hi]>=element){
            return hi;
        }
        return -1;
}

int upperbound(vector<int>&v,int element){
    int lo=0,hi=v.size()-1;
    int mid;
    while(hi - lo > 1){
        mid=(hi+lo)/2;
        if(v[mid]<=element){
            lo=mid+1;
        }else{
            hi=mid;
        }
    }
    if(v[lo]>element){
            return lo;
        }
        if(v[hi]>element){
            return hi;
        }
        return -1;
}
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
        cout<<"Found\n";
    }
    else cout<<"Not Found\n";

    // implement upper bound & lower bound

    int element;
    cin>>element;
    int lb = lowerbound(arr,element);
    cout<<lb<<" "<<(lb!=-1 ?arr[lb]:-1)<<endl;
    int ub = upperbound(arr,element);
    cout<<ub<<" "<<(ub!=-1 ? arr[ub]:-1)<<endl;
    


    return 0;

}






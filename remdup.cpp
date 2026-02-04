#include <bits/stdc++.h>
using namespace std;

int main() {
    


    vector<int> arr={1,1,2,2,3,3,3};
    // //set way
    // set<int> st;
    // for(int &c:arr){
    //     st.insert(c);
    // }
    // int index=0;
    // for(auto &it:st){
    //     arr[index]=it;
    //     index++;
    // }
    // for(int i=0;i<index;i++){
    //     cout<<arr[i]<<" ";
    // }


    //another optimised way
    int i=0;

    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }

    }

    cout<<i+1;

    return 0;
}
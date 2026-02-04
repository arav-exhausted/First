#include <bits/stdc++.h>
using namespace std;



// SELECTION SORT  worst 0(n*n) best 0(n*n)
//swaps the min element to the first index


void selection_sort(int ar[], int n){
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if(ar[j]<ar[mini]) mini=j;

        }

        swap(ar[i],ar[mini]);
    }


}

//BUBBLE SORT      worst 0(n*n) best 0(n)
// pushes the max to the last by swapping the adjacent element


void bubble_sort(int ar[],int n){
    for(int i=n-1;i>=1;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(ar[j]>ar[j+1]) {
                swap(ar[j],ar[j+1]);
                didswap=1;
            }
        }

        if(didswap==0) break;  //best tc

    }
}


//INSERTION SORT   worst 0(n*n) best 0(n)
//takes an element and places it into its correct position


void insertion_sort(int ar[], int n){


    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && ar[j-1]>ar[j]){
            swap(ar[j-1],ar[j]);
            j--;
        }
    }

}


// MERGE SORT worst 0(nlogn) best 0(nlogn)
//divide and merge
//worst case space complexity : 0(n)




void merge(vector<int>&arr,int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }

        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]= temp[i-low];
    }

}
void merge_sort(vector<int>& arr,int low, int high){

    if(low >= high) return;
    int mid = (low + high)/2;
    merge_sort(arr, low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

void mergeSort(vector<int> &arr, int n){
    merge_sort(arr,0,n-1);
}

//QUICK SORT   worst 0(n*n)    best 0(nlogn)      TC= 0(nlogn)  SC= 0(1)
//divide and conquer algorithm
//ascending order but also descending order with some tweaks
//pick a pivot(any element in array) and place it in the sorted array in its correct place
//smaller on the left and larger on the right 

int f(vector<int>&arr,int low,int high){
    int pivot= arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(i<=high && arr[i]<=pivot ){
            i++;
        }
        while(j>=low && arr[j]>pivot ){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[low],arr[j]);


    return j;
}

void quick_sort(vector<int>&arr, int low,int high){
    if(low<high){
        int pin=f(arr,low,high);
        quick_sort(arr,low,pin-1);
        quick_sort(arr,pin+1,high);
    }
}







int main() {



    //selection sort

    int n=6;
    vector<int> arr={13,46,52,24,20,9};
    int ar[6]={13,46,52,24,20,9};

    // selection_sort(ar,n);

    // bubble_sort(ar,n);

    //insertion_sort(ar,n);


    // for(int i=0;i<n;i++){
    //     cout<<ar[i]<<" ";
    // }

    // mergeSort(arr,n);

    quick_sort(arr,0,n-1);

    for(auto &it:arr){
        cout<<it<<" ";
    }


    
    return 0;
}
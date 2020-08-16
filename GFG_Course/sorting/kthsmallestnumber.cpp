#include<bits/stdc++.h>
using namespace std;


// Naive Approach

int kthSmallest(int arr[], int n, int k){
    // Your code here
    sort(arr+0,arr+n);
	return arr[k-1];
}

//Optimized Solution Using Lomuto Partition

int lpartition(int arr[],int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=0;j<h-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}

int kth(int arr[] ,int n; int k){
    int l=0,h =n-1;
    while(l<r){
        int p = lpartition(arr,l,h){
            if(p == k-1){
                return p;
            }else if(p > k-1){
                h = mid-1;
            }else{
                l = mid +1;
            }
        }
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<kthSmallest(arr,n,k)
    }
}

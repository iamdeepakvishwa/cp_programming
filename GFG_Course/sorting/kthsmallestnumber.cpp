#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int n, int k){
    // Your code here
    sort(arr+0,arr+n);
	return arr[k-1];
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

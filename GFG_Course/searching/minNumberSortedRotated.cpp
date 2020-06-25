#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0 ,high =n-1;

    while(low <= high){
        int mid = (low + high)/2;
        if(mid<high && arr[mid+1] < arr[mid]){
            return arr[mid+1];
        }
        if(mid > low && arr[mid] < arr[mid-1]){
            return arr[mid];
        }
        if(arr[high] > arr[mid]){
            high = mid -1;
        }
        low = mid + 1;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low = 0,high = n-1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[high]<=x){
            return high;
        }
        if(arr[mid] <= x && arr[mid+1]>x && mid>0){
            return mid;
        }
        else{
            if(arr[mid]>x){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
    }
}

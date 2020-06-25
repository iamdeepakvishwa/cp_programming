#include<bits/stdc++.h>
using namespace std;

//Find pair in sorted array which gives sum X

int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    int low =0,high=n-1;
    while(low<high){
        if(arr[low]+arr[high] == x){
            cout<<arr[low]<<" "<<arr[high];
            low = low+1;
            high = high -1;
        }
        else if(arr[low]+arr[high] > x){
            high = high-1;
        }
        else{
            low = low+1;
        }
    }
}

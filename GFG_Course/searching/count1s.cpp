#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low =0,high = n-1;

    while(low<=high){
        int mid = (low+high)/2;
        if((arr[mid] == 1) && (arr[mid-1] == 0) || mid ==0){
            cout<<n-mid;
            break;
        }
        else{
            if(arr[mid]==0 ){
                low = mid +1;
            }else{
                high = mid -1;
            }

        }
    }

}

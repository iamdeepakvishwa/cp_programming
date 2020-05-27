#include<bits/stdc++.h>
using namespace std;

int left_max(int arr[], int n){
    int left = arr[0];
    for(int i=0;i<n;i++){
        left = max(left,arr[i]);
    }
    cout<<"left=>"<<left<<endl;
    return left;
}

int right_max(int arr[], int j,int n){
    int right = arr[n-1];
    for(int i=j+1;i<n;i++){
        right = max(right ,arr[i+1]);
    }
    cout<<"right=>"<<right<<endl;
    return right;
}


int getWater(int arr[], int n){
    int result =0;
    for(int i=1;i<n-1;i++){
        result = result + min(left_max(arr,i),right_max(arr,i,n)) - arr[i];
    }
    return max(result,0);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = getWater(arr,n);
    cout<<endl<<res<<endl;

}

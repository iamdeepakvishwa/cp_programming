#include<bits/stdc++.h>
using namespace std;

int compute(int arr[] , int prr[] , int n ,int m){
    int arr1[n];
    for(int i =0;i<n;i++){
        arr1[i] = arr[i];
    }
    if(is_sorted(arr+0,arr+n)){
        return 1;
    }
    for(int i =0;i<m;i++){
        int temp = arr[prr[i]];
        arr[prr[i]] = arr[prr[i]-1];
        arr[prr[i]-1] = temp ;
        if(arr1 == arr){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    if(is_sorted(arr,arr+n)){
        cout<<"YES"<<endl;
        return 1;
    }
}

int main(){
    int arr[]= {4 ,1 ,2 ,3};
    int prr[]= {3 ,2};
    int result =compute(arr,prr,4,2);
    // if(result){
    //     cout<<"YES"<<endl;
    // }
    // else{
    //     cout<<"NO"<<endl;
    // }
}

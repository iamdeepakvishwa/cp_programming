/*
  Maximum Difference problem is to find the maximum of arr[j] - arr[i] where j>i.
*/

#include<bits/stdc++.h>
using namespace std;


//Naive Approach

int maxResult(int arr[],int n){
    int res = arr[1] - arr[0];

    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            res = max (res,arr[j]-arr[i]);
        }
    }
    return res;
}

//Efficient Approach

int maxResult_eff(int arr[],int n){
    int minVal = arr[0], res = arr[1]-arr[0];

    for(int j=1;j<n;j++){
        res = max(res,arr[j]-min);
        minVal = min(minVal,arr[j]);
    }
    return res;
}


int main(){
    
}

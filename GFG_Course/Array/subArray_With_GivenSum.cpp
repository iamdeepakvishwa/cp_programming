#include<bits/stdc++.h>
using namespace std;

// Find subarray with given sum and length subarray of size k

int subArray(int arr[],int n,int k,int sum){
    int curSum = 0;
    for(int i=0;i<k;i++){
        curSum += arr[i];
    }
    for(int i=k;i<n;i++){
        if(curSum == sum){
            return 1;
        }
        curSum = (curSum + arr[i]) - arr[i-k] ;
    }
    return 0;
}

//Find subarray with given sum
int subArray1(int arr[] ,int n,int sum){
    int curSum = arr[0];
    int s =0 ,
    for(int i=1;i<n;i++){
        while(curSum > sum && s< i-1){
            curSum -= arr[s];
            s++;
        }
        if(curSum==sum){
            return 1;
        }
        if(i<n){
            curSum +=arr[i];
        }
    }
}

int main(){


}

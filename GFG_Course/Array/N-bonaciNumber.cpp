#include<bits/stdc++.h>
using namespace std;

void nBonaci(int n ,int m){
    int arr[m] ={0};
    int s =0,START,count;
    arr[n-1] = 1;
    for(int i=0 ;i<n;i++){
        s += arr[i];
    }
    arr[n]= s;
    for(int i=1;i<m-n;i++){
        count =0,START =i,s=0;
        while(count< n ){
            s = s + arr[START];
            START++;
            count++;
        }
        arr[n+i] = s;
    }
    for(int i=0;i<m;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    nBonaci(3,9);
}

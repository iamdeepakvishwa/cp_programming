#include<bits/stdc++.h>
using namespace std;


//Naive Approach O(n^2);

int function(int arr[] ,int n){
    int res =0 ,count = 0;
    for(int i =0;i<n;i++){
        count = 0;
        for(j = i ;j<n;j++){
            if(arr[j] == 1){
                count++;
            }
            else break;
        }
        res = max(res,count);
    }
    return res;
}

// Efficient Approach O(n)

int function1(int arr[] ,int n){
    int res = 0 , cur =0 ;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            cur = 0;
        }
        else{
            cur++;
            res = max(res,cur);
        }
    }
    return res;
}

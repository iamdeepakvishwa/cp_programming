#include<bits/stdc++.h>
using namespace std;

//naive approach
int fun_naive(int arr[], int n){

    for(int i=0; i<n ;i++){
        int count = 0 ;
        for(int j=0;j<n;j++){
            if(a[i] == a[j]){
                count++;
            }
            if(count%2 ==0){
                return a[i];
            }
        }
    }
}

// Bitwise Operator

i

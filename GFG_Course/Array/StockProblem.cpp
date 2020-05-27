#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int n){
    int profit = 0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            profit = profit + (arr[i] - arr[i-1]);
        }
    }
    return profit;
}

int main() {
    
    return 0;
}

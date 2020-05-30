#include<bits/stdc++.h>
using namespace std;

// Find maximum (or minimum) sum of a subarray of size k

//Naive Approach O((n-k)*k)

int maxfunction(int arr[] ,int n,int k){
    int curSum = INT_MIN ;
    for(int i=0;i<(n-k+1);i++){
        int sum =0;
        for(int j=0;j<k;j++){
            sum += arr[j+i];
        }
        curSum = max(curSum ,sum);
    }
    return curSum;
}

//Window Sliding Technique

int maxfunction1(int arr,int n,int k){
    int sum = 0 ,maxcurr;
    for(int i=0;i<k;i++){
        sum += arr[i];
    }
    max = sum;
    for(i=k;i<n;i++){
        sum = (sum + arr[i]) - arr[i-k];
        maxcurr = max(maxcurr ,sum);
    }
    return maxcurr;
}

int main(){


}

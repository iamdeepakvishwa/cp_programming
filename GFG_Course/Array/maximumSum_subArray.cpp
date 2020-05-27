#include<bits/stdc++.h>
using namespace std;

//Naive Approach
int function(int arr[] ,int n){
    int res = arr[0] ,cur =0;
    for(int i=0;i<n;i++){
        cur =0
        for(int j = i;j<n;j++){
            cur = cur + arr[i];
            res = max(res,cur);
        }
    }
}

//Efficient Kadane's O(n)

int function(int arr[] ,int n){
    int res[n];
    res[0] = arr[0]
    for(int i=1;i<n;i++){
        res[i] = max(arr[i] ,res[i-1]+arr[i]);
    }
    return max_element(res, res+n);
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << function1(arr, n);
    return 0;
} 

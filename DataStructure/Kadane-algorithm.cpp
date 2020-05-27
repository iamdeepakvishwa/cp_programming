#include<bits/stdc++.h>
using namespace std;

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

#include<bits/stdc++.h>
using namespace std;

//Prefix Sum array

int prefixSum(int arr[],int n,int sum[]){
    sum[0] = arr[0];
    for(int i=1;i<n;i++){
        sum[i] = sum[i-1] + arr[i] ;
    }

}

int main() {
	int arr[] = { 10, 4, 16, 20 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int prefixSum[n];

	prefixSum(arr, n, prefixSum);
	for (int i = 0; i < n; i++)
		cout << prefixSum[i] << " "; 
}

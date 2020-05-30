/*
find maximum circular sum subarray of a given array.  Two approaches are discussed, one is O(n^2) and other is O(n).
*/
#include<bits/stdc++.h>
using namespace std;

//Naive Approach O(n^2)

int function1(int arr[] ,int n){
    int res = arr[0];
    for(int i=0;i<n;i++){
        int curSum = arr[i];
        int curMax = arr[i];
        for(int j = 1;j<n;j++){
            int index = (i+j)%n;
            curSum += arr[index];
            curMax = max(curMax,curSum);
        }
        res = max(res , curMax);
    }
    return res;
}

/*
    Efficient Approach O(n)
    Two ideas (Take Maximum of the following two ):
        1) Maximum Sum of the Normal SubArray  (kadane's Algo)
        2) Maximum Sum of the Circular SubArray(totalSum - minSubArraySum)

*/

int normalSum(int arr[] ,int n){
    int res = arr[0] , maxSum = arr[0];
    for(int i=1;i<n;i++){
        maxSum = max(arr[i] , maxSum + arr[i])
        res = max(maxSum , res);
    }
    return res;
}


int overAllSum(int arr[],int n){
    int normalsum = normalSum(arr[] , n);
    if(normalSum < 0){
        return normalSum;
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        arr[i] = -arr[i];
    }
    int maxCircularSum = sum + normalSum(arr,n);
    return max(normalsum , maxCircularSum);
}

int main(){

    
}

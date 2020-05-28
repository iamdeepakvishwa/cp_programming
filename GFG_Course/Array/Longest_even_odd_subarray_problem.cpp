//find the length of the longest subarray that has alternating even odd elements.

#include<bits/stdc++.h>
using namespace std;


//Naive Approach
int function1(int arr[] , int n){
    int res = 1;
    for(int i=0;i<n;i++){
        int curr = 1
        for(int j=i+1;j<n;j++){
            if((arr[j] % 2 == 0 && arr[j-1] != 0) || (arr[j] % 2 != 0 && arr[j-1] == 0)){
                curr++;
            }
            else{
                break;
            }
        }
        res = max(res,curr);
    }
    return res;
}

//Efficient Approach Based kadane's Algorithm O(n)

int function1(int arr[] ,int n){
    int res[n] ,curr =1;
    res[0] = 1 ;
    for(int i=1;i<n;i++){
        if((arr[i-1] % 2 == 0 && arr[i] % 2 != 0) || (arr[i-1] % 2 != 0 && arr[i] % 2 == 0)){
            curr++;
            res[i] = max(res[i-1],curr);
        }
        else{
            curr = 1;
        }
    }
    return max_element(res , res+n);
}

int main(){
}

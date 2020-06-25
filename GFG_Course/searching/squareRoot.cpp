#include<bits/stdc++.h>
using namespace std;


//Naive Approach
int main(){
    int n;
    cin>>n;
    res = 1;
    while (res*res <=n) {
        /* code */
        res++;
    }
    cout<<res;
}


//Binary Search method

int function(int n){
    int low = 1 , high = n-1,ans;
    while(low<=high){
        int mid = (low + high) / 2;
        if(mid * mid == n){
            return mid;
        }
        else{
            if(mid * mid > n){
                high = mid - 1;
            }
            else{
                low = mid + 1;
                ans = mid;
            }
        }
    }
    return ans;
}

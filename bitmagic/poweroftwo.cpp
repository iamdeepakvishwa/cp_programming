#include<bits/stdc++.h>
using namespace std;
// Naive Method
bool fun_naive(int n){
    if(n==0){
        return false;
    }
    while(n!=1){
        if(n%2!=0){
            return false;
        }
        n = n/2 ;
    }
    return true;
}

//BitWise Method

bool fun_bit(int n){
    if (n==0) {
        /* code */
        return 0;
    }
    return ((n&(n-1))==0);
}


int main(){
    int n;
    cin>>n;
    bool result = fun(n)
}

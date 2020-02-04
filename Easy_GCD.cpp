#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


ll findGCD(int arr[], ll n)
{
    ll result = arr[0];
    for (ll i = 1; i < n; i++){
        result = gcd(arr[i], result);
        if(result == 1){
           return 1;
        }
    }
    return result;
}
int main(){
    ll n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll x = findGCD(arr,n);
    cout<<x;
    // if(x==1){
    //     cout<<0<<endl;
    //     return 0;
    // }
    //
    // if(k<x){
    //     cout<<0<<endl;
    // }
    // else{
    //     ll i =k;
    //     while(i%x!=0){
    //         i--;
    //     }
    //     cout<<i<<endl;
    // }
}

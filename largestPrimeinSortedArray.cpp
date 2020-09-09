#include<bits/stdc++.h>
using namespace std;

int result(int arr[], int len){
    int n = arr[len-1];
    bool prime[n+1];
    memset(prime,true,sizeof(prime));

    for(int i=2;i*i<=n;i++){
        if(prime[i] == true){
            for(int j = i*i ;j<=n;j+=i){
                prime[j] =false;
            }
        }
    }
    for(int i = len-1;i>=0;i--){
        if(prime[arr[i]]){
            return arr[i];
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res = result(arr,n);
    cout<<res<<endl;
}

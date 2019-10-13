#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int x=n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i] = 5-arr[i];
        if(arr[i]<k){
            x--;
        }
    }
    cout<<(x/3)<<endl;
}

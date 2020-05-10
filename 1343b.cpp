#include<bits/stdc++.h>
using namespace std;

void getArray(int n){
    int x = n/2;
    if(x%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int sum_0 = 0,sum_1=0,i=0;
    for(i=1;i<=n/2;i++){
        cout<<(2*i)<<" ";
        sum_1 = sum_1 + (2*i);
    }
    for(i=1;i<n/2;i++){
        cout<<((2*i)-1)<<" ";
        sum_0 = sum_0 + ((2*i)-1);
    }
    cout<<sum_1-sum_0<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n ;
        getArray(n);
    }
}

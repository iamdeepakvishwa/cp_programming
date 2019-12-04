#include<bits/stdc++.h>
using namespace std;
#define P 1000000000
unsigned long long int nCr(unsigned long long int n){
    unsigned long long int c =1,i;
    for (i=1;i<n+2;i++){
        c = c%P;
        cout<<c<<" ";
        c = c*(n+1-i)/i;
    }
    cout<<endl;
}

int main(){
    unsigned long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        nCr(n);
    }
}

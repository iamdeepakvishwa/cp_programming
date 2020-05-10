#include<bits/stdc++.h>
using namespace std;


unsigned long long int getRes(unsigned long long int n){
    unsigned long long int k = 2;
    while(n%((unsigned long long int)pow(2,k)-1)!=0){
        k++;
    }
    unsigned long long int res = n / ((unsigned long long int)pow(2,k)-1);
    return res;
}

int main(){
    unsigned long long int t;
    cin>>t;
    while(t--){
        unsigned long long int n;
        cin>>n;
        cout<<getRes(n)<<endl;
    }
}

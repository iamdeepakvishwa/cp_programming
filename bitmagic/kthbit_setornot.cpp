#include<bits/stdc++.h>
using namespace std;

void kthbit(int n,int k){
    if(n &(1<<(k-1) !=0){
        cout<<"yes";
    }
    else{
        cout<<" NO";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    kthbit(n,k);
}

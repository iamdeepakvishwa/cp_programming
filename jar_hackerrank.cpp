#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i;
    cin>>n>>m;
    int a,b,k;
    int sum = 0;
    for(i=0;i<m;i++){
        cin>>a>>b>>k;
        sum = sum + ((b-a)+1)*k;
    }
    cout<<sum/n;
}

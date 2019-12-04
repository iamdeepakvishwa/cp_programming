#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int f[n],t[n];
    for(int i=0;i<n;i++){
        cin>>f[i]>>t[i];
    }
    int joy[n],x=0;
    for(int i=0;i<n;i++){
        if(t[i]>k){
            joy[x] = f[i]-(t[i]-k);
            x++;
        }
        else{
                joy[x]=f[i];
                x++;
        }
    }
    sort(joy+0,joy+n,greater<int>());
    cout<<joy[0]<<endl;

}

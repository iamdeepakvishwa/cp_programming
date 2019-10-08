#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,X=0,Y=0,Z=0;
    cin>>x;
    int a[x],b[x],c[x];
    for(int i=0;i<x;i++){
        cin>>a[i]>>b[i]>>c[i];
        X+=a[i];
        Y+=b[i];
        Z+=c[i];
    }
    if(X==0 && Y==0 && Z==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

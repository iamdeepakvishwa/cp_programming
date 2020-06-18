#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag=1;
        bool x_0=0,x_1=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(!b[i]){
                x_1=1;
            }
            else{
                x_0=1;
            }
        }
        if(is_sorted(a,a+n)){
            cout<<"YES"<<endl;
        }
        else if(x_1&&x_0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

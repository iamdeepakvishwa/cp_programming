#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,n;
        cin>>x>>y>>n;
        int mod = n%x;
        if(mod==y){
            cout<<n<<endl;
        }
        else if(mod<y){
            cout<<n-mod-(x-y)<<endl;
        }
        else{
            cout<<n-(mod-y)<<endl;
        }
    }
}
